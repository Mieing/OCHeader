@class NSMutableDictionary, NSPointerArray, NSDictionary, NSArray, NSMutableArray, NSString;

@interface AWEConcernFollowListUnreadCacheManager : NSObject <AWEUserMessage, AWEConcernFollowListUnreadCacheManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *memoryCacheMap;
@property (retain, nonatomic) NSPointerArray *listeningViewControllers;
@property (retain, nonatomic) NSDictionary *trackCacheMap;
@property (copy, nonatomic) NSArray *otherProfilePageReferingWhiteList;
@property (copy, nonatomic) NSArray *videoPlayReferingWhiteList;
@property (retain, nonatomic) NSMutableArray *playedAwemeIDArray;
@property (nonatomic) BOOL forceAllUnread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)trackingInfoUpdateIfNeeded:(id)a0 logExtraDict:(id)a1 model:(id)a2;
- (void)videoStartPlaySucceed:(id)a0;
- (BOOL)enableOptimize;
- (BOOL)enableRecentUpdateOptimize;
- (BOOL)enableExperienceOptimize;
- (BOOL)enableFollowListShowUnread;
- (BOOL)supportReferingHandleUnreadWhenVideoPlay:(id)a0;
- (BOOL)isUnreadWithFollowingUserID:(id)a0 item:(id)a1;
- (BOOL)enableExperimentNeedHandleUnreadWhenVideoPlay;
- (void)markReadStatusWithUser:(id)a0 itemIdList:(id)a1 completion:(id /* block */)a2;
- (BOOL)hasListeningViewControllersInMemory;
- (id)awemeIDsWithFollowingUserID:(id)a0;
- (void)updateAwemeIDsWithFollowingUserID:(id)a0 items:(id)a1;
- (BOOL)enableExperimentMarkUnreadToServer;
- (void)uploadReadStatusWithType:(unsigned long long)a0 itemIdList:(id)a1 completion:(id /* block */)a2;
- (id)trackCachedItemsWithFollowingUserID:(id)a0;
- (id)diffNotExistAwemeIDsWithUser:(id)a0 diffTargetItems:(id)a1 responseItems:(id)a2;
- (void)updateNotExistAwemeIDsWithUser:(id)a0 itemIdList:(id)a1 completion:(id /* block */)a2;
- (BOOL)enableUploadItemsNotExist;
- (BOOL)trackisUnreadWithFollowingUserID:(id)a0 item:(id)a1;
- (void)addSourceSceneViewController:(id)a0;
- (BOOL)supportEnterScene:(id)a0;
- (void)diffAndUpdateNotExistAwemeIDsWithUser:(id)a0 diffTargetItems:(id)a1 responseItems:(id)a2;
- (void)clearDuplicate;
- (BOOL)canFilterDuplicate;
- (BOOL)isDuplicateInUnreadListPageWithAweme:(id)a0;
- (BOOL)enableRecentUpdateOptimizeWithEnterFrom:(unsigned long long)a0;
- (BOOL)enableUploadItemsNotExistWithEnterFrom:(unsigned long long)a0;
- (void)saveTrackUnreadInfo;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)dealloc;

@end
