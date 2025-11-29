@class WAJSNativeBufferBase, WACanvasPluginScheduler, NSThread, NSString, NSMutableArray;
@protocol WAJSCanvasBaseServiceDelegate;

@interface WAJSCanvasBaseService : NSObject <JSCanvasEventHandlerContextDelegate, WAJSCanvasJSEventHandlerContextDelegate>

@property (retain, nonatomic) WACanvasPluginScheduler *pluginScheduler;
@property (retain, nonatomic) NSMutableArray *eventHandlers;
@property (retain, nonatomic) NSMutableArray *eventHandlersContext;
@property (retain) WAJSNativeBufferBase *nativeBufferBase;
@property (weak, nonatomic) id<WAJSCanvasBaseServiceDelegate> delegate;
@property (retain) NSThread *thread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initNativeBuffer;
- (void)injectWeiXinNativeBuffer:(id)a0;
- (void)weAppJsApiCallbackWithScript:(id)a0;
- (void)injectWxConfig:(id)a0;
- (void)setupWeAppJSAPI:(id)a0;
- (void)setupInvokeHandler:(id)a0 param:(id)a1 callbackId:(unsigned int)a2 appId:(id)a3;
- (id)hookClassNameWithEventName:(id)a0;
- (void)endWithResultWithParams:(id)a0 handler:(id)a1 context:(id)a2;
- (void)__innerEndWithResultWithParams:(id)a0;
- (id)getParentViewController;
- (id)getWebViewPluginByName:(id)a0;
- (id)getWeAppPluginByName:(id)a0;
- (id)getDataFromAppPkgFullPath:(id)a0;
- (void).cxx_destruct;

@end
