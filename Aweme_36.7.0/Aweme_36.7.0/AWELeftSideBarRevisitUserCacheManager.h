@class NSArray, NSMutableDictionary, NSString;

@interface AWELeftSideBarRevisitUserCacheManager : NSObject <AWELeftSideBarRevisitUserCacheManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *memoryCacheMap;
@property (copy, nonatomic) NSArray *videoPlayReferingWhiteList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)videoStartPlaySucceed:(id)a0;
- (BOOL)supportReferingHandleUnreadWhenVideoPlay:(id)a0;
- (BOOL)isUnreadWithFollowingUserID:(id)a0 item:(id)a1;
- (void)markReadStatusWithUser:(id)a0 itemIdList:(id)a1 completion:(id /* block */)a2;
- (id)awemeIDsWithFollowingUserID:(id)a0;
- (void)updateAwemeIDsWithFollowingUserID:(id)a0 items:(id)a1;
- (void)uploadReadStatusWithType:(unsigned long long)a0 itemIdList:(id)a1 completion:(id /* block */)a2;
- (id)diffNotExistAwemeIDsWithUser:(id)a0 diffTargetItems:(id)a1 responseItems:(id)a2;
- (void)updateNotExistAwemeIDsWithUser:(id)a0 itemIdList:(id)a1 completion:(id /* block */)a2;
- (void)updateRevisitUserCellReadPoint:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)dealloc;

@end
