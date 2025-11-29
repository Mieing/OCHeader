@class NSMutableDictionary;

@interface WSWebViewPlugin_JSBridge : WSWebViewPluginBase

@property (nonatomic) BOOL bViewAppear;
@property (nonatomic) BOOL hasSendUiInitEvent;
@property (nonatomic) BOOL bPreRender;
@property (nonatomic) long long uiinitRetryCount;
@property (retain, nonatomic) NSMutableDictionary *extraUIInitParams;
@property (nonatomic) BOOL autoSendOnUIInit;

- (id)init;
- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)sendVertSearchEntriesDataEvent;
- (void)trySendOnUIInitEventWhenPageExpose;
- (void)trySendOnUIInitEventWhenPreRender;
- (void)trySendOnUIInitEvent;
- (void)doSendOnUIInitEvent;
- (id)getContextMap;
- (void).cxx_destruct;

@end
