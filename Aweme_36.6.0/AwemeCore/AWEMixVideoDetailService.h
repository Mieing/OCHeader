@class NSString, NSHashTable;

@interface AWEMixVideoDetailService : NSObject <AWEMixVideoDetailServiceProtocol>

@property (retain, nonatomic) NSHashTable *hashTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestLoginBeforeMixCollectWithCompleteBlcok:(id /* block */)a0;
+ (void)requestMixCollectWithMixId:(id)a0 action:(unsigned long long)a1 completeBlock:(id /* block */)a2;
+ (void)mixWatchedReportWithMixID:(id)a0 itemID:(id)a1 cursor:(id)a2 completeBlock:(id /* block */)a3;
+ (void)saveMixID:(id)a0 playCurrentEpisode:(id)a1;
+ (id)mixExtraParamsForAwemeStatsWithAweme:(id)a0;
+ (void)trackCompilationMonitorWithMixVideoModel:(id)a0 error:(id)a1 enterFrom:(id)a2;
+ (void)requestMixVideoDetailInfo:(id)a0 completeBlock:(id /* block */)a1;
+ (void)updateVideo:(id)a0 toMix:(id)a1 withType:(unsigned long long)a2 completeBlock:(id /* block */)a3;
+ (void)requestMixVideoDetailList:(id)a0 cursor:(id)a1 count:(id)a2 pullDown:(BOOL)a3 skipLocalCache:(BOOL)a4 reqFrom:(id)a5 completeBlock:(id /* block */)a6;
+ (void)trackMixAwemeRequestMonitorWithModel:(id)a0 error:(id)a1 mixID:(id)a2;
+ (void)requestMixVideoDetailInfo:(id)a0 skipLocalCache:(BOOL)a1 reqFrom:(id)a2 completeBlock:(id /* block */)a3;
+ (id)lastReadEpisodeForMixID:(id)a0;
+ (void)requestBatchMixCollectWithMixId:(id)a0 batchMixIds:(id)a1 action:(unsigned long long)a2 completeBlock:(id /* block */)a3;
+ (void)registerObserver:(id)a0;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
