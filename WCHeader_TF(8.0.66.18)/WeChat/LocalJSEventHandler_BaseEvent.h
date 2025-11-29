@class NSString, NSDictionary, _TtC6WeChat14LocalJSXHRTask;
@protocol LocalJSEventHandlerContextDelegate;

@interface LocalJSEventHandler_BaseEvent : NSObject

@property (copy, nonatomic) NSString *debugModuleName;
@property (copy, nonatomic) NSString *callbackId;
@property (weak, nonatomic) id<LocalJSEventHandlerContextDelegate> context;
@property (copy, nonatomic) NSString *cgiIdentifierKey;
@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) LocalJSEventHandler_BaseEvent *attachEventHandler;
@property (readonly, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) _TtC6WeChat14LocalJSXHRTask *xhrTask;

- (void)startwork:(id)a0;
- (void)handleJSEvent:(id)a0;
- (BOOL)enabled;
- (BOOL)useParallelRequest;
- (BOOL)__tryUseParallelRequestCache;
- (id)JSAPIName;
- (void)endWithParams:(id)a0;
- (void)endWithMessage:(id)a0;
- (void)endWithErrormsg:(id)a0;
- (void)endWithRetCode:(long long)a0 errMsg:(id)a1;
- (void)endWithEvent:(id)a0 result:(id)a1;
- (id)webViewPluginScheduler;
- (id)webviewOwner;
- (id)curViewController;
- (id)getCurrentUrl;
- (id)description;
- (void).cxx_destruct;

@end
