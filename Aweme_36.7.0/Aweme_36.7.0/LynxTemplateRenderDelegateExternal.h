@class NSString;

@interface LynxTemplateRenderDelegateExternal : NSObject <LynxTemplateRenderDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)templateRenderOnResetViewAndLayer:(id)a0;
- (void)templateRenderOnTemplateStartLoading:(id)a0;
- (void)templateRender:(id)a0 onErrorOccurred:(id)a1;
- (void)templateRenderOnFirstScreen:(id)a0;
- (void)templateRenderOnPageUpdate:(id)a0;
- (void)templateRenderOnDetach:(id)a0;
- (void)templateRenderOnDataUpdated:(id)a0;
- (void)templateRender:(id)a0 onPageChanged:(BOOL)a1;
- (void)templateRenderOnTasmFinishByNative:(id)a0;
- (void)templateRender:(id)a0 onTemplateLoaded:(id)a1;
- (void)templateRenderOnRuntimeReady:(id)a0;
- (void)templateRender:(id)a0 onReceiveDynamicComponentPerf:(id)a1;
- (id)templateRender:(id)a0 translatedResourceWithId:(id)a1 themeKey:(id)a2;
- (void)templateRender:(id)a0 onCallJSBFinished:(id)a1;
- (void)templateRender:(id)a0 onJSBInvoked:(id)a1;
- (void)templateRender:(id)a0 didInvokeMethod:(id)a1 inModule:(id)a2 errorCode:(int)a3;
- (void)templateRender:(id)a0 onReceiveFirstLoadPerf:(id)a1;
- (void)templateRender:(id)a0 onUpdatePerf:(id)a1;

@end
