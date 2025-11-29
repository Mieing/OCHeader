@class NSString, WAWebViewController;
@protocol WAWebViewPluginContextProtocol;

@interface WAWebViewPluginBase : NSObject <IWAWebViewPluginProtocol>

@property (weak, nonatomic) id<WAWebViewPluginContextProtocol> context;
@property (readonly, weak, nonatomic) WAWebViewController *webViewController;
@property (nonatomic) BOOL isRecording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setWebViewOwner:(id)a0;
- (BOOL)isGameApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isNormalWeApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (BOOL)isExternalNotification:(id)a0;
- (void).cxx_destruct;

@end
