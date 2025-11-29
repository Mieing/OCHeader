@class NSString, NSBundle, AWESecureArchiveDownloader;

@interface AWEActivityResourceManager : NSObject <AWEActivityResourceManagerProtocol>

@property (retain, nonatomic) AWESecureArchiveDownloader *downloader;
@property (retain, nonatomic) NSBundle *remoteResourcesBundle;
@property (nonatomic) long long retryLoadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackService:(id)a0 status:(long long)a1 extra:(id)a2;
- (void)downloadAllResourceWithModelIfNeeded:(id)a0;
- (void)loadLottieFromModel:(id)a0 isRedRain:(BOOL)a1 completion:(id /* block */)a2;
- (void)loadPNGImageFromModel:(id)a0 isRedRain:(BOOL)a1 completion:(id /* block */)a2;
- (void)setupRootFolder:(id)a0;
- (BOOL)needDownLoadResourceWithModel:(id)a0;
- (void)downloadAllResource;
- (BOOL)resourceFileLottieExisted:(id)a0;
- (BOOL)resourceFilePNGExisted:(id)a0;
- (void)loadPNGImageFromModel:(id)a0 completion:(id /* block */)a1;
- (void)loadLottieFromModel:(id)a0 completion:(id /* block */)a1;
- (void)p_downloadResourceWithModel:(id)a0;
- (id)lottieNamed:(id)a0;
- (id)pathForResource:(id)a0 ofType:(id)a1 bundle:(id *)a2;
- (BOOL)resourceIsExisted:(id)a0;
- (void)postResourceIsReadyNotify;
- (void)cleanRootFolder:(id)a0;
- (void).cxx_destruct;

@end
