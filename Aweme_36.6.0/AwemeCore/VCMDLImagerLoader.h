@class AVMDLDataLoader, NSThread, VCMDLImagerConfig, NSString, MDLDownloader;

@interface VCMDLImagerLoader : NSObject <MDLDownloaderCallback>

@property (retain, nonatomic) VCMDLImagerConfig *config;
@property (retain, nonatomic) NSThread *stopThread;
@property (retain, nonatomic) MDLDownloader *globalDownloader;
@property (nonatomic) BOOL isMDLReady;
@property (retain, nonatomic) AVMDLDataLoader *innerDataLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareLoader;

- (BOOL)canFetchForUrl:(id)a0 params:(id)a1;
- (id)fetchImage:(id)a0 headerField:(id)a1 options:(id)a2 onResponse:(id /* block */)a3 onData:(id /* block */)a4 onError:(id /* block */)a5 onInfo:(id /* block */)a6 onComplete:(id /* block */)a7;
- (long long)_bid:(id)a0;
- (void)onInfos:(long long)a0 key:(long long)a1 value:(long long)a2 infos:(id)a3;
- (void)configDict:(id)a0;
- (void)threadEntryPoint;
- (void).cxx_destruct;

@end
