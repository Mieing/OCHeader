@class NSString, NSMutableDictionary;

@interface AFDRecommendToFriendCacheService : NSObject <AWEUserMessage, AFDRecommendToFriendCacheServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *modelRecommendCache;
@property (retain, nonatomic) NSMutableDictionary *modelCancelRecommendCache;
@property (retain, nonatomic) NSMutableDictionary *recordRecommendToFriendInfoCaches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)getRecordChangeAwemeSelfRecommendStatusCachesWithModel:(id)a0;
- (BOOL)getRecordShowRecommendLabelToFriendCachesWithModel:(id)a0;
- (void)recordShowRecommendLabelToFriendCachesWithModel:(id)a0;
- (BOOL)getShowRecommendEntranceLabelCachesWithModel:(id)a0;
- (void)recordShowRecommendEntranceLabelCachesWithModel:(id)a0;
- (void)recordChangeAwemeSelfRecommendStatusCachesWithModel:(id)a0;
- (id)getIsRecommendOnPurposeWithModel:(id)a0;
- (id)getEverCancelRecommendWithModel:(id)a0;
- (void)updateRecommendStatusCacheForModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetCache;
- (void)dealloc;

@end
