@class BDPModel, NSString, BDPStarkPage, BDPUniqueID;

@interface BDPStarkWebviewPreloadManager : NSObject <BDPGamePreloadProtocol>

@property (retain, nonatomic) BDPStarkPage *preloadPage;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPModel *model;
@property BOOL packageReady;
@property BOOL dataLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)tryReleaseAllPreloadGamePage;
+ (BOOL)enablePreloadPageForMemoryLimit;
+ (id)sharedManager;

- (void)tryReleaseAllPreloadGamePage;
- (void)tryPreloadGamePage:(id)a0 type:(long long)a1;
- (id)gamePageWithUniqueID:(id)a0 enablePreloadHtml:(BOOL)a1;
- (void)notifySCPackageReadyWithUniqueID:(id)a0 model:(id)a1;
- (void)releaseTerminatedPreloadPage:(id)a0;
- (BOOL)isWebViewPreloadInterrupted;
- (void)setUp;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
