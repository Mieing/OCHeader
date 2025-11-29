@class NSTimer, NSString, NSMutableDictionary, NSObject, NSMutableSet, NSMutableArray, NSMapTable, NSCache;
@protocol OS_dispatch_semaphore;

@interface AWEIMUserManager : NSObject <AWEIMBatchFetchUserSessionDelegate, AWEUserMessage, AWEIMContactMessage, AWEIMUserManagerProtocol>

@property (retain, nonatomic) NSMutableSet *fetchingUserSet;
@property (retain, nonatomic) NSMutableArray *sessions;
@property (retain, nonatomic) NSMutableArray *waitRequestQueue;
@property (retain, nonatomic) NSMutableDictionary *userCompletionDict;
@property (retain, nonatomic) NSCache *userCache;
@property (retain, nonatomic) NSMapTable *userMapTable;
@property (retain, nonatomic) NSMapTable *secUIDUserMapTable;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *userMapTableLock;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (id)localCachedUserForUserID:(id)a0;
- (void)fetchUserWithUserID:(id)a0 secUserID:(id)a1 source:(id)a2 completion:(id /* block */)a3;
- (id)userVMForUserID:(id)a0 secUserID:(id)a1;
- (id)getUserFromCacheWithUserID:(id)a0;
- (id)getUserFromCacheWithSecUID:(id)a0;
- (void)queryUserVMForUserID:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)queryIMUserVMForUserID:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)fetchIMUser:(id)a0 secUserID:(id)a1 completion:(id /* block */)a2;
- (void)fetchIMUser:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)fetchIMUser:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completionWithOwnerID:(id /* block */)a3;
- (void)fetchUser:(id)a0 secUserID:(id)a1 completion:(id /* block */)a2;
- (void)fetchUser:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)immediatelyQueryIMUserForUserID:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)getIMUserWithUserID:(id)a0 secUserID:(id)a1 option:(unsigned long long)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)getIMUsersWithUserIDs:(id)a0 option:(unsigned long long)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)getIMUsersWithSecUIDs:(id)a0 option:(unsigned long long)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)didSaveUsers:(id)a0;
- (void)batchFetchUserSessionDidFinished:(id)a0;
- (void)userDetailUpdateNotification:(id)a0;
- (void)lockMapTable;
- (void)unlockMapTable;
- (void)immediatelyFetchIMUser:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)p_fetchIMUserWithUserID:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)p_featchIMUserWithSecUserID:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)p_immediatelyFeatchIMUserWithUserID:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)p_fetchSingleUser:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)trackGetIMUserMethodWithFrom:(id)a0 Source:(id)a1 Success:(BOOL)a2;
- (void)p_saveIMUser:(id)a0 forOwnerID:(id)a1 withOption:(unsigned long long)a2 dataFrom:(long long)a3;
- (void)p_fetchIMUserWithUserID:(id)a0 secUserID:(id)a1 extraParams:(id)a2 saveUserNeedCheckMeFollowStatusAndContactName:(BOOL)a3 completion:(id /* block */)a4;
- (id)__fetchFullDetailUserWithUidArray:(id)a0 extraParams:(id)a1;
- (id)__mergeUserArray:(id)a0 withFetchResult:(id)a1;
- (id)__batchFetchUserWithUidArray:(id)a0 extraParams:(id)a1;
- (id)__fetchFullDetailUserWithSecUIDArray:(id)a0 extraParams:(id)a1;
- (void)p_fetchSingleUser:(id)a0 secUserID:(id)a1 extraParams:(id)a2 saveUserNeedCheckMeFollowStatusAndContactName:(BOOL)a3 completion:(id /* block */)a4;
- (id)p_saveIMUser:(id)a0 dataFrom:(long long)a1 forOwnerSecID:(id)a2;
- (id)p_saveIMUser:(id)a0 dataFrom:(long long)a1 forOwnerID:(id)a2;
- (void)p_updateUserVM:(id)a0;
- (void)addCompletionBlock:(id /* block */)a0 toUser:(id)a1;
- (void)p_getIMUserFromServerWithSecUserID:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (id)p_saveAweUser:(id)a0 dataFrom:(long long)a1 forOwnerID:(id)a2;
- (void)p_getUserProfileWithSecUserID:(id)a0 extraParams:(id)a1 detailCompletion:(id /* block */)a2;
- (void)p_getUserProfileWithSecUserID:(id)a0 cacheStrategy:(unsigned long long)a1 cacheMaxAge:(double)a2 extraParams:(id)a3 detailCompletion:(id /* block */)a4;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
