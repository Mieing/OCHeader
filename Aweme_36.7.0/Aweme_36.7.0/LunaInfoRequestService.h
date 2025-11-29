@class YYCache, NSMutableDictionary;

@interface LunaInfoRequestService : NSObject

@property (retain, nonatomic) YYCache *yyCache;
@property (nonatomic) BOOL isSubsInfoRequesting;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSMutableDictionary *trackRequestBlocks;

+ (id)shared;

- (void)cleanAllCache;
- (long long)didFirstUseTime;
- (void)updateCount:(long long)a0;
- (void)registerMiniLunaUser;
- (void)cleanCacheModel:(id)a0;
- (void)collectModel:(id)a0 completion:(id /* block */)a1;
- (void)p_appendFeedViewModel:(id)a0 trackResponse:(id)a1 isFromCache:(BOOL)a2;
- (void)p_appendFeedViewModel:(id)a0 videoResponse:(id)a1 isFromCache:(BOOL)a2;
- (void)requestInfoWithFeedViewModel:(id)a0 ignoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)queryTrackV2:(id)a0 ignoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)queryVideoV2:(id)a0 ignoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (id)p_audioPreviewModelFrom:(id)a0 playerInfo:(id)a1;
- (void)p_cancelCollectAction:(id)a0 completion:(id /* block */)a1;
- (void)p_collectAction:(id)a0 completion:(id /* block */)a1;
- (void)p_changeCollectStatus:(BOOL)a0 changeCount:(BOOL)a1 model:(id)a2;
- (void)p_sendMusicLikeNotificationStatus:(BOOL)a0 trackID:(id)a1;
- (void)requestFeedViewModelWithTracKId:(id)a0 anchorType:(id)a1 responseBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)requestFeedViewModelWithVideoId:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)requestInfoWithFeedViewModel:(id)a0 completion:(id /* block */)a1;
- (void)p_postMusicLikeNotificationWithTrackID:(id)a0 type:(unsigned long long)a1;
- (void)reportAction:(id)a0 queueType:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
