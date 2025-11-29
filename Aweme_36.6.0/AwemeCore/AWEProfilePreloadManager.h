@class NSMutableDictionary, NSDictionary, AWESocialRelationObserver, NSString;

@interface AWEProfilePreloadManager : NSObject <AWEUserMessage, AWEProfilePreloadManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *memoryCacheDict;
@property (retain, nonatomic) NSDictionary *preloadObjClassDict;
@property (retain, nonatomic) NSMutableDictionary *authorRevisitDict;
@property (retain, nonatomic) AWESocialRelationObserver *mateStatusObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishApproveUserFollowRequest:(id)a0 error:(id)a1;
- (void)didFinishRejectUserFollowRequestWithNoticeID:(id)a0 user:(id)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishCloseFriendsWithUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)didSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)didCancelSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)didChangePrivateRelationWithUser:(id)a0 relationType:(long long)a1 relationValue:(long long)a2;
- (void)handleMemoryWarning:(id)a0;
- (void)updateMateStatus:(id)a0;
- (void)preloadWithTypes:(long long)a0 sourceType:(long long)a1 userID:(id)a2 secUserID:(id)a3 paramDictionary:(id)a4;
- (BOOL)ifNeedPreloadWithWithType:(long long)a0 sourceType:(long long)a1 userID:(id)a2 secUserID:(id)a3 paramDictionary:(id)a4;
- (void)removeWithType:(long long)a0 sourceType:(long long)a1 userID:(id)a2;
- (id)loadWithType:(long long)a0 sourceType:(long long)a1 userID:(id)a2 secUserID:(id)a3 paramDictionary:(id)a4 needCreateIfNeed:(BOOL)a5;
- (id)preloaderWithType:(long long)a0 userID:(id)a1;
- (BOOL)enableProfilePreloadDetail;
- (void)addMateStatusObserverIfNeed;
- (void)alogWarnWithContent:(id)a0;
- (id)preloadObjWithUserID:(id)a0 secUserID:(id)a1 sourceType:(long long)a2 preloadType:(long long)a3 paramDictionary:(id)a4 needCreateIfNeed:(BOOL)a5;
- (void)cleanAllMemoryCaches;
- (void)alogInfoWithContent:(id)a0;
- (id)memoryCacheWith:(long long)a0;
- (id)preloadUserObj:(id)a0;
- (id)preloadPostObj:(id)a0;
- (id)cachedUserModelWithoutBoundDetailVC:(id)a0;
- (void)updateRecommendReasonIfNeeded:(id)a0;
- (void)updatePostLoadType:(long long)a0 userID:(id)a1;
- (id)cachedUserModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
