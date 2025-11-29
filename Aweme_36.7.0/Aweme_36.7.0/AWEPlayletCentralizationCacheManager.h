@class NSArray, NSString, AWEAwemeModel;

@interface AWEPlayletCentralizationCacheManager : NSObject

@property (retain, nonatomic) AWEAwemeModel *cachedAwemeModel;
@property (copy, nonatomic) NSArray *cachedCardModels;
@property (copy, nonatomic) NSString *feedCacheFailReason;

+ (id)sharedManager;

- (BOOL)enablePlayletTabCacheVideoDownload;
- (void)applicationWillResignActiveNotification:(id)a0;
- (void)startDownloadVideo;
- (BOOL)enablePlayletTabCacheCardModel;
- (void)updateCacheCardModels:(id)a0;
- (id)lastWatchedPlaylet;
- (id)lastWatchedIAAPlaylet;
- (void)setupCachedAwemeModelFromFile;
- (void)enableCachedAwemeVideoAutoTrim:(id)a0;
- (BOOL)isCachedIAAPlayletAwemeValid:(id)a0;
- (void)clearCachedAwemeVideoIfNeed:(id)a0;
- (BOOL)isCachedPlayletAwemeValid:(id)a0;
- (long long)playletRevisitLocalCacheSeconds;
- (BOOL)checkIsCDNUrlExpiredWithAweme:(id)a0;
- (void)updateLastWatchedPlaylet:(id)a0 duration:(double)a1;
- (void)startPreloadWithAweme:(id)a0 successBlock:(id /* block */)a1;
- (void)loadCachedCardModelsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObservers;

@end
