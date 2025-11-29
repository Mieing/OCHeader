@class BDPWKGamePage, NSString;

@interface BDPWKGameWebviewPreloadManager : NSObject <BDPGamePreloadProtocol>

@property (retain, nonatomic) BDPWKGamePage *preloadPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)tryReleaseAllPreloadGamePage;
+ (id)sharedManager;

- (void)tryReleaseAllPreloadGamePage;
- (void)tryPreloadGamePage:(id)a0 type:(long long)a1;
- (id)gamePageWithUniqueID:(id)a0 enablePreloadHtml:(BOOL)a1;
- (BOOL)isWebViewPreloadInterrupted;
- (void)releasePreloadPage:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
