@class MMLiteAppViewController, FlutterMethodChannel, NSString;

@interface MMFinderLiveLiteAppPreviewView : MMFinderLiveLiteAppPlatformView <MMFinderLiveFrontEndPreviewViewChannel>

@property (weak, nonatomic) MMLiteAppViewController *liteApp;
@property (retain, nonatomic) FlutterMethodChannel *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 data:(id)a1;
- (void)handleJSMethod:(id)a0 params:(id)a1 WithResult:(id /* block */)a2;
- (void).cxx_destruct;

@end
