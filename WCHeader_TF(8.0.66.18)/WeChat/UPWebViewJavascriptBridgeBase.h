@class NSMutableArray, NSMutableDictionary;
@protocol UPWebViewJavascriptBridgeBaseDelegate;

@interface UPWebViewJavascriptBridgeBase : NSObject {
    id _webViewDelegate;
    long long _uniqueId;
}

@property (weak, nonatomic) id<UPWebViewJavascriptBridgeBaseDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *startupMessageQueue;
@property (retain, nonatomic) NSMutableDictionary *responseCallbacks;
@property (retain, nonatomic) NSMutableDictionary *messageHandlers;
@property (copy, nonatomic) id /* block */ messageHandler;

+ (void)enableLogging;
+ (void)setLogMaxLength:(int)a0;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)sendData:(id)a0 responseCallback:(id /* block */)a1 handlerName:(id)a2;
- (void)flushMessageQueue:(id)a0;
- (void)injectJavascriptFile;
- (BOOL)isWebViewJavascriptBridgeURL:(id)a0;
- (BOOL)isSchemeMatch:(id)a0;
- (BOOL)isQueueMessageURL:(id)a0;
- (BOOL)isBridgeLoadedURL:(id)a0;
- (void)logUnkownMessage:(id)a0;
- (id)webViewJavascriptCheckCommand;
- (id)webViewJavascriptFetchQueyCommand;
- (void)disableJavscriptAlertBoxSafetyTimeout;
- (void)_evaluateJavascript:(id)a0;
- (void)_queueMessage:(id)a0;
- (void)_dispatchMessage:(id)a0;
- (id)_serializeMessage:(id)a0 pretty:(BOOL)a1;
- (id)_deserializeMessageJSON:(id)a0;
- (void)_log:(id)a0 json:(id)a1;
- (void).cxx_destruct;

@end
