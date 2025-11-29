@class NSMutableDictionary, IESBridgeEngine, IESBridgeEngine_Deprecated, NSMutableSet, UIView;
@protocol IESBridgeExecutor;

@interface IESPiper : NSObject

@property (readonly, nonatomic) IESBridgeEngine *bridgeEngine;
@property (retain, nonatomic) IESBridgeEngine_Deprecated *deprecatedBridgeEngine;
@property (retain, nonatomic) NSMutableDictionary *callbackHandlers;
@property (nonatomic) int uniqueID;
@property (readonly, nonatomic) NSMutableSet *publicCallSet;
@property (readonly, nonatomic) NSMutableSet *protectedSet;
@property (readonly, nonatomic) NSMutableSet *privateSet;
@property (weak, nonatomic) UIView<IESBridgeExecutor> *webView;

+ (id)currentJSSDKVersion;

- (void)invokeJSWithEventID:(id)a0 parameters:(id)a1 finishBlock:(id /* block */)a2;
- (void)registerJS2NativeHandlerBlock:(id /* block */)a0 forJSMethod:(id)a1 authType:(unsigned long long)a2 methodNamespace:(id)a3;
- (void)invokeJSWithCallbackID:(id)a0 parameters:(id)a1;
- (void)getAuthConfigWithClientKey:(id)a0 domain:(id)a1 secretKey:(id)a2 finishBlock:(id /* block */)a3;
- (void)registerHandlerBlock:(id /* block */)a0 forJSMethod:(id)a1 authType:(unsigned long long)a2;
- (void)registerConfigMethod;
- (void)registerHandlerBlock:(id /* block */)a0 forJSMethod:(id)a1 authType:(unsigned long long)a2 methodNamespace:(id)a3;
- (id)getNewUnqiueID;
- (void)processIFrameMessage:(id)a0;
- (void)registerJS2NativeHandlerBlock:(id /* block */)a0 forJSMethod:(id)a1 authType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (void)flushMessages;

@end
