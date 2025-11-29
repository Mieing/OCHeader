@class NSLock, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, ACCNetworkReachabilityProtocol, OS_dispatch_semaphore;

@interface AWEComposerBeautyEffectDownloader : NSObject

@property (nonatomic) long long nextDownloadIndex;
@property (retain, nonatomic) NSArray *allEffects;
@property (retain, nonatomic) NSMutableArray *downloadingEffects;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) long long retryDownloadTimes;
@property (retain, nonatomic) id<ACCNetworkReachabilityProtocol> reachabilityManager;

+ (id)defaultDownloader;

- (void)downloadEffects:(id)a0;
- (BOOL)allEffectsDownloaded;
- (id)getIPArrayFromHost:(id)a0;
- (id)getIPFromURLList:(id)a0;
- (long long)downloadStatusOfEffect:(id)a0;
- (void)addEffectToDownloadQueue:(id)a0;
- (void)addNextEffectToDownloadQueue;
- (void)handleNetworkChanged:(id)a0;
- (void)checkForUndownloadedEffects;
- (void)trackEffect:(id)a0 withDownloadError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isDownloading:(id)a0;

@end
