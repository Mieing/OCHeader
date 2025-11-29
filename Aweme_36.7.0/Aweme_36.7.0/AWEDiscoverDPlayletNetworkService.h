@class NSHashTable;

@interface AWEDiscoverDPlayletNetworkService : NSObject

@property (retain, nonatomic) NSHashTable *hashTable;

+ (id)requestPlayletVideoList:(id)a0 cursor:(id)a1 count:(id)a2 pullDown:(BOOL)a3 disableInsertAd:(long long)a4 requestParams:(id)a5 completeBlock:(id /* block */)a6;
+ (void)requestPlayletDetailInfo:(id)a0 completeBlock:(id /* block */)a1;
+ (void)requestPlayletCollectWithID:(id)a0 action:(unsigned long long)a1 completeBlock:(id /* block */)a2;
+ (void)savePlayletID:(id)a0 playCurrentEpisode:(id)a1;
+ (void)requestPaymentMixVideoWithAwemeID:(id)a0 uploadTrack:(BOOL)a1;
+ (void)requestPaymentVideoWithAwemeID:(id)a0 referString:(id)a1 playProgress:(double)a2 uploadTrack:(BOOL)a3 isIgnore302Error:(BOOL)a4;
+ (void)requestIAAPaymentVideoWithAwemeID:(id)a0 uploadTrack:(BOOL)a1 afterLogin:(BOOL)a2;
+ (void)requestIAAPaymentVideoWithAwemeID:(id)a0 referString:(id)a1 playProgress:(double)a2 uploadTrack:(BOOL)a3 completion:(id /* block */)a4;
+ (void)requestLoginBeforePlayletCollectWithCompleteBlcok:(id /* block */)a0;
+ (id)lastReadEpisodeForPlayletID:(id)a0;
+ (void)requestPlayletDetailInfo:(id)a0 requestParams:(id)a1 completeBlock:(id /* block */)a2;
+ (void)requestPlayletRecommendListWithPlayletIDs:(id)a0 requestParams:(id)a1 completeBlock:(id /* block */)a2;
+ (void)requestPlayletUserList:(id)a0 cursor:(id)a1 count:(id)a2 completeBlock:(id /* block */)a3;
+ (void)requestPlayletUserProfileTabList:(id)a0 cursor:(id)a1 count:(id)a2 completeBlock:(id /* block */)a3;
+ (void)requestPlayletRecommendListWithPlayletIDs:(id)a0 completeBlock:(id /* block */)a1;
+ (void)savePlayletHistoryWithID:(id)a0 playCurrentEpisode:(id)a1 awemeID:(id)a2 materialType:(long long)a3;
+ (void)uploadPaymentVideoWatchRecord:(id)a0 completion:(id /* block */)a1;
+ (id)adRequestParamsWithExtraParams:(id)a0;
+ (void)registerObserver:(id)a0;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
