mw.loader.impl(function(){return["ext.gadget.ReferenceTooltips@1qy8t",function($,jQuery,require,module){(function(){var REF_LINK_SELECTOR='.reference, a[href^="#CITEREF"]',COMMENTED_TEXT_CLASS='rt-commentedText',COMMENTED_TEXT_SELECTOR=(COMMENTED_TEXT_CLASS?'.'+COMMENTED_TEXT_CLASS+', ':'')+'abbr[title]';mw.messages.set({'rt-settings':'Reference Tooltips settings','rt-enable-footer':'Enable Reference Tooltips','rt-settings-title':'Reference Tooltips','rt-save':'Save','rt-cancel':'Cancel','rt-enable':'Enable Reference Tooltips','rt-disable':'Disable Reference Tooltips','rt-activationMethod':'Tooltip appears when','rt-hovering':'hovering','rt-clicking':'clicking','rt-delay':'Delay before the tooltip appears (in milliseconds)','rt-tooltipsForComments':'Show tooltips over <span title="Tooltip example" class="'+(COMMENTED_TEXT_CLASS||'rt-commentedText')+'" style="border-bottom: 1px dotted; cursor: help;">text with a dotted underline</span> in Reference Tooltips style (allows to see such tooltips on devices with no mouse support)','rt-disabledNote':
'You can re-enable Reference Tooltips using a link in the footer of the page.','rt-done':'Done','rt-enabled':'Reference Tooltips are enabled'});var SECONDS_IN_A_DAY=60*60*24,CLASSES={FADE_IN_DOWN:'rt-fade-in-down',FADE_IN_UP:'rt-fade-in-up',FADE_OUT_DOWN:'rt-fade-out-down',FADE_OUT_UP:'rt-fade-out-up'},IS_TOUCHSCREEN='ontouchstart'in document.documentElement,IS_MOBILE=/Mobi|Android/i.test(navigator.userAgent)||typeof window.orientation!=='undefined',CLIENT_NAME=$.client.profile().name,settingsString,settings,enabled,delay,activatedByClick,tooltipsForComments,cursorWaitCss,windowManager,$body=$(document.body),$window=$(window);function rt($content){if(window.pg){return;}var teSelector,settingsDialogOpening=false;function setSettingsCookie(){mw.cookie.set('RTsettings',Number(enabled)+'|'+delay+'|'+Number(activatedByClick)+'|'+Number(tooltipsForComments),{path:'/',expires:90*SECONDS_IN_A_DAY,prefix:''});}function enableRt(){enabled=true;setSettingsCookie();$('.rt-enableItem').remove();rt(
$content);mw.notify(mw.msg('rt-enabled'));}function disableRt(){$content.find(teSelector).removeClass('rt-commentedText').off('.rt');$body.off('.rt');$window.off('.rt');}function addEnableLink(){var $footer=$('#footer-places, #f-list');if(!$footer.length){$footer=$('#footer li').parent();}$footer.append($('<li>').addClass('rt-enableItem').append($('<a>').text(mw.msg('rt-enable-footer')).attr('href','javascript:').click(function(e){e.preventDefault();enableRt();})));}function TooltippedElement($element){var tooltip,events,te=this;function onStartEvent(e){var showRefArgs;if(activatedByClick&&te.type!=='commentedText'&&e.type!=='contextmenu'){e.preventDefault();}if(!te.noRef){showRefArgs=[$(this)];if(te.type!=='supRef'){showRefArgs.push(e.pageX,e.pageY);}te.showRef.apply(te,showRefArgs);}}function onEndEvent(){if(!te.noRef){te.hideRef();}}if(!$element){return;}this.$element=$element;this.$originalElement=$element;if(this.$element.is(REF_LINK_SELECTOR)){if(this.$element.prop('tagName')===
'SUP'){this.type='supRef';}else{this.type='harvardRef';}}else{this.type='commentedText';this.comment=this.$element.attr('title');if(!this.comment){return;}this.$element.addClass('rt-commentedText');}if(activatedByClick){events={'click.rt':onStartEvent};if(this.type==='commentedText'&&(this.$element.closest('a').length||this.$element.has('a').length)){events['contextmenu.rt']=onStartEvent;}}else{events={'mouseenter.rt':onStartEvent,'mouseleave.rt':onEndEvent};}this.$element.on(events);this.hideRef=function(immediately){clearTimeout(te.showTimer);if(this.type==='commentedText'){this.$element.attr('title',this.comment);}if(this.tooltip&&this.tooltip.isPresent){if(activatedByClick||immediately){this.tooltip.hide();}else{this.hideTimer=setTimeout(function(){te.tooltip.hide();},200);}}else if(this.$ref&&this.$ref.hasClass('rt-target')){this.$ref.removeClass('rt-target');if(activatedByClick){$body.off('click.rt touchstart.rt',this.onBodyClick);}}};this.showRef=function($element,ePageX,ePageY)
{if(window.pg){disableRt();return;}if(this.tooltip&&!this.tooltip.$content.length){return;}var tooltipInitiallyPresent=this.tooltip&&this.tooltip.isPresent;function reallyShow(){var viewportTop,refOffsetTop,teHref;if(!te.$ref&&!te.comment){teHref=te.type==='supRef'?te.$element.find('a').attr('href'):te.$element.attr('href');te.$ref=teHref&&$('#'+$.escapeSelector(teHref.slice(1)));if(!te.$ref||!te.$ref.length||!te.$ref.text()){te.noRef=true;return;}}if(!tooltipInitiallyPresent&&!te.comment){viewportTop=$window.scrollTop();refOffsetTop=te.$ref.offset().top;if(!activatedByClick&&viewportTop<refOffsetTop&&viewportTop+$window.height()>refOffsetTop+te.$ref.height()&&$window.width()>te.$ref.offset().left+te.$ref.width()){te.$ref.addClass('rt-target');return;}}if(!te.tooltip){te.tooltip=new Tooltip(te);if(!te.tooltip.$content.length){return;}}te.tooltip.parent=te.$element.closest('.rt-tooltip').data('tooltip');if(te.tooltip.parent&&te.tooltip.parent.disappearing){return;}te.tooltip.show();if(
tooltipInitiallyPresent){if(te.tooltip.$element.hasClass('rt-tooltip-above')){te.tooltip.$element.addClass(CLASSES.FADE_IN_DOWN);}else{te.tooltip.$element.addClass(CLASSES.FADE_IN_UP);}return;}te.tooltip.calculatePosition(ePageX,ePageY);$window.on('resize.rt',te.onWindowResize);}this.$element=$element;if(this.type==='commentedText'){this.$element.attr('title','');}if(activatedByClick){if(tooltipInitiallyPresent||(this.$ref&&this.$ref.hasClass('rt-target'))){return;}else{setTimeout(function(){$body.on('click.rt touchstart.rt',te.onBodyClick);},0);}}if(activatedByClick||tooltipInitiallyPresent){reallyShow();}else{this.showTimer=setTimeout(reallyShow,delay);}};this.onBodyClick=function(e){if(!te.tooltip&&!(te.$ref&&te.$ref.hasClass('rt-target'))){return;}var $current=$(e.target);function contextMatchesParameter(parameter){return this===parameter;}while($current.length&&(!$current.hasClass('rt-tooltip')||!$current.data('tooltip')||!$current.data('tooltip').upToTopParent(
contextMatchesParameter,[te.tooltip],true))){$current=$current.parent();}if(!$current.length){te.hideRef();}};this.onWindowResize=function(){te.tooltip.calculatePosition();};}function Tooltip(te){function openSettingsDialog(){var settingsDialog,settingsWindow;if(cursorWaitCss){cursorWaitCss.disabled=true;}function SettingsDialog(){SettingsDialog.parent.call(this);}OO.inheritClass(SettingsDialog,OO.ui.ProcessDialog);SettingsDialog.static.name='settingsDialog';SettingsDialog.static.title=mw.msg('rt-settings-title');SettingsDialog.static.actions=[{modes:'basic',action:'save',label:mw.msg('rt-save'),flags:['primary','progressive']},{modes:'basic',label:mw.msg('rt-cancel'),flags:'safe'},{modes:'disabled',action:'deactivated',label:mw.msg('rt-done'),flags:['primary','progressive']}];SettingsDialog.prototype.initialize=function(){var dialog=this;SettingsDialog.parent.prototype.initialize.apply(this,arguments);this.enableOption=new OO.ui.RadioOptionWidget({label:mw.msg('rt-enable')});this.
disableOption=new OO.ui.RadioOptionWidget({label:mw.msg('rt-disable')});this.enableSelect=new OO.ui.RadioSelectWidget({items:[this.enableOption,this.disableOption],classes:['rt-enableSelect']});this.enableSelect.selectItem(this.enableOption);this.enableSelect.on('choose',function(item){if(item===dialog.disableOption){dialog.activationMethodSelect.setDisabled(true);dialog.delayInput.setDisabled(true);dialog.tooltipsForCommentsCheckbox.setDisabled(true);}else{dialog.activationMethodSelect.setDisabled(false);dialog.delayInput.setDisabled(dialog.clickOption.isSelected());dialog.tooltipsForCommentsCheckbox.setDisabled(false);}});this.hoverOption=new OO.ui.RadioOptionWidget({label:mw.msg('rt-hovering')});this.clickOption=new OO.ui.RadioOptionWidget({label:mw.msg('rt-clicking')});this.activationMethodSelect=new OO.ui.RadioSelectWidget({items:[this.hoverOption,this.clickOption]});this.activationMethodSelect.selectItem(activatedByClick?this.clickOption:this.hoverOption);this.
activationMethodSelect.on('choose',function(item){if(item===dialog.clickOption){dialog.delayInput.setDisabled(true);}else{dialog.delayInput.setDisabled(dialog.clickOption.isSelected());}});this.activationMethodField=new OO.ui.FieldLayout(this.activationMethodSelect,{label:mw.msg('rt-activationMethod'),align:'top'});this.delayInput=new OO.ui.NumberInputWidget({input:{value:delay},step:50,min:0,max:5000,disabled:activatedByClick,classes:['rt-numberInput']});this.delayField=new OO.ui.FieldLayout(this.delayInput,{label:mw.msg('rt-delay'),align:'top'});this.tooltipsForCommentsCheckbox=new OO.ui.CheckboxInputWidget({selected:tooltipsForComments});this.tooltipsForCommentsField=new OO.ui.FieldLayout(this.tooltipsForCommentsCheckbox,{label:new OO.ui.HtmlSnippet(mw.msg('rt-tooltipsForComments')),align:'inline',classes:['rt-tooltipsForCommentsField']});new TooltippedElement(this.tooltipsForCommentsField.$element.find('.'+(COMMENTED_TEXT_CLASS||'rt-commentedText')));this.fieldset=new OO.ui.
FieldsetLayout();this.fieldset.addItems([this.activationMethodField,this.delayField,this.tooltipsForCommentsField]);this.panelSettings=new OO.ui.PanelLayout({padded:true,expanded:false});this.panelSettings.$element.append(this.enableSelect.$element,$('<hr>').addClass('rt-settingsFormSeparator'),this.fieldset.$element);this.panelDisabled=new OO.ui.PanelLayout({padded:true,expanded:false});this.panelDisabled.$element.append($('<table>').addClass('rt-disabledHelp').append($('<tr>').append($('<td>').append($('<img>').attr('src','https://en.wikipedia.org/w/load.php?modules=ext.popups.images&image=footer&format=rasterized&lang=ru&skin=vector&version=0uotisb')),$('<td>').addClass('rt-disabledNote').text(mw.msg('rt-disabledNote')))));this.stackLayout=new OO.ui.StackLayout({items:[this.panelSettings,this.panelDisabled]});this.$body.append(this.stackLayout.$element);};SettingsDialog.prototype.getSetupProcess=function(data){return SettingsDialog.parent.prototype.getSetupProcess.call(this,data).
next(function(){this.stackLayout.setItem(this.panelSettings);this.actions.setMode('basic');},this);};SettingsDialog.prototype.getActionProcess=function(action){var dialog=this;if(action==='save'){return new OO.ui.Process(function(){var newDelay=Number(dialog.delayInput.getValue());enabled=dialog.enableOption.isSelected();if(newDelay>=0&&newDelay<=5000){delay=newDelay;}activatedByClick=dialog.clickOption.isSelected();tooltipsForComments=dialog.tooltipsForCommentsCheckbox.isSelected();setSettingsCookie();if(enabled){dialog.close();disableRt();rt($content);}else{dialog.actions.setMode('disabled');dialog.stackLayout.setItem(dialog.panelDisabled);disableRt();addEnableLink();}});}else if(action==='deactivated'){dialog.close();}return SettingsDialog.parent.prototype.getActionProcess.call(this,action);};SettingsDialog.prototype.getBodyHeight=function(){return this.stackLayout.getCurrentItem().$element.outerHeight(true);};tooltip.upToTopParent(function adjustRightAndHide(){if(this.isPresent){if
(this.$element[0].style.right){this.$element.css('right','+='+(window.innerWidth-$window.width()));}this.te.hideRef(true);}});if(!windowManager){windowManager=new OO.ui.WindowManager();$body.append(windowManager.$element);}settingsDialog=new SettingsDialog();windowManager.addWindows([settingsDialog]);settingsWindow=windowManager.openWindow(settingsDialog);settingsWindow.opened.then(function(){settingsDialogOpening=false;});settingsWindow.closed.then(function(){windowManager.clearWindows();});}var tooltip=this;this.te=te;switch(this.te.type){case'supRef':this.id='rt-'+this.te.$originalElement.attr('id');this.$content=this.te.$ref.contents().filter(function(i){var $this=$(this);return this.nodeType===Node.TEXT_NODE||!($this.is('.mw-cite-backlink')||(i===0&&($this.is('b')||$this.is('a')&&$this.attr('href').indexOf('#ref')===0)));}).clone(true);break;case'harvardRef':this.id='rt-'+this.te.$originalElement.closest('li').attr('id');this.$content=this.te.$ref.clone(true).removeAttr('id');
break;case'commentedText':this.id='rt-'+String(Math.random()).slice(2);this.$content=$(document.createTextNode(this.te.comment));break;}if(!this.$content.length){return;}this.insideWindow=Boolean(this.te.$element.closest('.oo-ui-window').length);this.$element=$('<div>').addClass('rt-tooltip').attr('id',this.id).attr('role','tooltip').data('tooltip',this);if(this.insideWindow){this.$element.addClass('rt-tooltip-insideWindow');}this.$content=this.$content.wrapAll('<div>').parent().addClass('rt-tooltipContent').addClass('mw-parser-output').appendTo(this.$element);if(!activatedByClick){this.$element.mouseenter(function(){if(!tooltip.disappearing){tooltip.upToTopParent(function(){this.show();});}}).mouseleave(function(e){if(CLIENT_NAME!=='chrome'||(!e.originalEvent||e.originalEvent.relatedTarget!==null||!tooltip.clickedTime||$.now()-tooltip.clickedTime>50)){tooltip.upToTopParent(function(){this.te.hideRef();});}}).click(function(){tooltip.clickedTime=$.now();});}if(!this.insideWindow){$(
'<div>').addClass('rt-settingsLink').attr('title',mw.msg('rt-settings')).click(function(){if(settingsDialogOpening){return;}settingsDialogOpening=true;if(mw.loader.getState('oojs-ui')!=='ready'){if(cursorWaitCss){cursorWaitCss.disabled=false;}else{cursorWaitCss=mw.util.addCSS('body { cursor: wait; }');}}mw.loader.using(['oojs','oojs-ui'],openSettingsDialog);}).prependTo(this.$content);}this.$tail=$('<div>').addClass('rt-tooltipTail').prependTo(this.$element);this.disappearing=false;this.show=function(){this.disappearing=false;clearTimeout(this.te.hideTimer);clearTimeout(this.te.removeTimer);this.$element.removeClass(CLASSES.FADE_OUT_DOWN).removeClass(CLASSES.FADE_OUT_UP);if(!this.isPresent){$body.append(this.$element);}this.isPresent=true;};this.hide=function(){var tooltip=this;tooltip.disappearing=true;if(tooltip.$element.hasClass('rt-tooltip-above')){tooltip.$element.removeClass(CLASSES.FADE_IN_DOWN).addClass(CLASSES.FADE_OUT_UP);}else{tooltip.$element.removeClass(CLASSES.FADE_IN_UP)
.addClass(CLASSES.FADE_OUT_DOWN);}tooltip.te.removeTimer=setTimeout(function(){if(tooltip.isPresent){tooltip.$element.detach();tooltip.$tail.css('left','');if(activatedByClick){$body.off('click.rt touchstart.rt',tooltip.te.onBodyClick);}$window.off('resize.rt',tooltip.te.onWindowResize);tooltip.isPresent=false;}},200);};this.calculatePosition=function(ePageX,ePageY){var teElement,teOffsets,teOffset,tooltipTailOffsetX,tooltipTailLeft,offsetYCorrection=0;this.$tail.css('left','');teElement=this.te.$element.get(0);if(ePageX!==undefined){tooltipTailOffsetX=ePageX;teOffsets=teElement.getClientRects&&teElement.getClientRects()||teElement.getBoundingClientRect();if(teOffsets.length>1){for(var i=teOffsets.length-1;i>=0;i--){if(ePageY>=Math.round($window.scrollTop()+teOffsets[i].top)&&ePageY<=Math.round($window.scrollTop()+teOffsets[i].top+teOffsets[i].height)){teOffset=teOffsets[i];}}}}if(!teOffset){teOffset=teElement.getClientRects&&teElement.getClientRects()[0]||teElement.
getBoundingClientRect();}teOffset={top:$window.scrollTop()+teOffset.top,left:$window.scrollLeft()+teOffset.left,width:teOffset.width,height:teOffset.height};if(!tooltipTailOffsetX){tooltipTailOffsetX=(teOffset.left*2+teOffset.width)/2;}if(CLIENT_NAME==='msie'&&this.te.type==='supRef'){offsetYCorrection=-Number(this.te.$element.parent().css('font-size').replace('px',''))/2;}this.$element.css({top:teOffset.top-this.$element.outerHeight()-7+offsetYCorrection,left:tooltipTailOffsetX-20,right:''});if(this.$element.offset().left+this.$element.outerWidth()>$window.width()-1){this.$element.css({left:'',right:0});tooltipTailLeft=tooltipTailOffsetX-this.$element.offset().left-5;}if(teOffset.top<this.$element.outerHeight()+$window.scrollTop()+6){this.$element.removeClass('rt-tooltip-above').addClass('rt-tooltip-below').addClass(CLASSES.FADE_IN_UP).css({top:teOffset.top+teOffset.height+9+offsetYCorrection});if(tooltipTailLeft){this.$tail.css('left',(tooltipTailLeft+12)+'px');}}else{this.$element.
removeClass('rt-tooltip-below').addClass('rt-tooltip-above').addClass(CLASSES.FADE_IN_DOWN).css({top:teOffset.top-this.$element.outerHeight()-7+offsetYCorrection});if(tooltipTailLeft){this.$tail.css('left',tooltipTailLeft+'px');}}};this.upToTopParent=function(func,parameters,stopAtTrue){var returnValue,currentTooltip=this;do{returnValue=func.apply(currentTooltip,parameters);if(stopAtTrue&&returnValue){break;}}while(currentTooltip=currentTooltip.parent);if(stopAtTrue){return returnValue;}};}if(!enabled){addEnableLink();return;}teSelector=REF_LINK_SELECTOR;if(tooltipsForComments){teSelector+=', '+COMMENTED_TEXT_SELECTOR;}$content.find(teSelector).each(function(){new TooltippedElement($(this));});}settingsString=mw.cookie.get('RTsettings','');if(settingsString){settings=settingsString.split('|');enabled=Boolean(Number(settings[0]));delay=Number(settings[1]);activatedByClick=Boolean(Number(settings[2]));tooltipsForComments=settings[3]===undefined?IS_TOUCHSCREEN&&IS_MOBILE:Boolean(Number(
settings[3]));}else{enabled=true;delay=200;activatedByClick=IS_TOUCHSCREEN;tooltipsForComments=IS_TOUCHSCREEN&&IS_MOBILE;}mw.hook('wikipage.content').add(rt);}());
},{"css":[".rt-tooltip{position:absolute;z-index:800; max-width:350px;background:#fff;color:#222;font-size:13px;line-height:1.5em;border:1px solid #c8ccd1;border-radius:3px;box-shadow:0 15px 45px -10px rgba(0,0,0,0.3);overflow-wrap:break-word}.rt-tooltip.rt-tooltip-insideWindow{z-index:810}.rt-tooltipContent{padding:8px 11px}.rt-tooltip-above .rt-tooltipContent{margin-bottom:-8px;padding-bottom:16px}.rt-tooltip-below .rt-tooltipContent{margin-top:-10px;padding-top:18px}.rt-tooltipTail,.rt-tooltipTail:after{position:absolute;width:12px;height:12px}.rt-tooltipTail{background:linear-gradient(to top right,#c8ccd1 50%,rgba(0,0,0,0) 50%)}.rt-tooltipTail:after{content:\"\";background:#fff;bottom:1px;left:1px}.rt-tooltip-above .rt-tooltipTail{transform:rotate(-45deg);transform-origin:100% 100%;bottom:0;left:15px}.rt-tooltip-below .rt-tooltipTail{transform:rotate(135deg);transform-origin:0 0;top:0;left:27px}.rt-settingsLink{background-image:url(data:image/svg+xml,%3C%3Fxml%20version%3D%221.0%22%20encoding%3D%22utf-8%22%3F%3E%0D%0A%3Csvg%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%20viewBox%3D%220%200%2024%2024%22%3E%0D%0A%20%20%20%20%3Cpath%20fill%3D%22%23555%22%20d%3D%22M20%2014.5v-2.9l-1.8-.3c-.1-.4-.3-.8-.6-1.4l1.1-1.5-2.1-2.1-1.5%201.1c-.5-.3-1-.5-1.4-.6L13.5%205h-2.9l-.3%201.8c-.5.1-.9.3-1.4.6L7.4%206.3%205.3%208.4l1%201.5c-.3.5-.4.9-.6%201.4l-1.7.2v2.9l1.8.3c.1.5.3.9.6%201.4l-1%201.5%202.1%202.1%201.5-1c.4.2.9.4%201.4.6l.3%201.8h3l.3-1.8c.5-.1.9-.3%201.4-.6l1.5%201.1%202.1-2.1-1.1-1.5c.3-.5.5-1%20.6-1.4l1.5-.3zM12%2016c-1.7%200-3-1.3-3-3s1.3-3%203-3%203%201.3%203%203-1.3%203-3%203z%22%2F%3E%0D%0A%3C%2Fsvg%3E);float:right;cursor:pointer;margin:-4px -4px 0 8px;height:24px;width:24px;border-radius:2px;background-position:center center;background-repeat:no-repeat;background-size:24px 24px}.rt-settingsLink:hover{background-color:#eee}.rt-target{background-color:#def}.rt-enableSelect{font-weight:bold}.rt-settingsFormSeparator{margin:0.85714286em 0}.rt-numberInput.rt-numberInput{width:150px}.rt-tooltipsForCommentsField.rt-tooltipsForCommentsField.rt-tooltipsForCommentsField{margin-top:1.64285714em}.rt-disabledHelp{border-collapse:collapse}.rt-disabledHelp td{padding:0}.rt-disabledNote.rt-disabledNote{vertical-align:bottom;padding-left:0.36em;font-weight:bold}@keyframes rt-fade-in-up{0%{opacity:0;transform:translate(0,20px) }100%{opacity:1;transform:translate(0,0) }}@keyframes rt-fade-in-down{0%{opacity:0;transform:translate(0,-20px) }100%{opacity:1;transform:translate(0,0) }}@keyframes rt-fade-out-down{0%{opacity:1;transform:translate(0,0) }100%{opacity:0;transform:translate(0,20px) }}@keyframes rt-fade-out-up{0%{opacity:1;transform:translate(0,0) }100%{opacity:0;transform:translate(0,-20px) }}.rt-fade-in-up{animation:rt-fade-in-up 0.2s ease forwards }.rt-fade-in-down{animation:rt-fade-in-down 0.2s ease forwards }.rt-fade-out-down{animation:rt-fade-out-down 0.2s ease forwards }.rt-fade-out-up{animation:rt-fade-out-up 0.2s ease forwards }"]}];});
mw.loader.impl(function(){return["ext.gadget.switcher@1dkzm",function($,jQuery,require,module){'use strict';$(function(){$.each(document.querySelectorAll('.switcher-container'),function(i,container){if(i==0){mw.loader.using(['mediawiki.util'],function(){mw.util.addCSS('.switcher-container label input{margin-right:0.5em}')})}var selected,$radio;var switchers=[]
var radioName='switcher-'+i;$.each(container.children,function(j,switcher){var label=switcher.querySelector('.switcher-label');if(!label||!label.childNodes.length){return;}switchers.push(switcher);$radio=$('<input>').prop({type:'radio',name:radioName}).on('click',function(){$(selected).hide();$(switcher).show();selected=switcher;});if(!selected){selected=switcher;$radio.prop('checked',true);}else if(label.getAttribute('data-switcher-default')!==null){$radio.click();}else{$(switcher).hide();}$('<label style="display:block"></label>').append($radio,label.childNodes).appendTo(container);$(label).remove();});if(switchers.length>1){$('<label style="display:block">Show all</label>').prepend($('<input>').prop({type:'radio',name:radioName}).on('click',function(){$(switchers).show();selected=switchers;})).appendTo(container);}if(switchers.length===1){$radio.remove();}});});
}];});