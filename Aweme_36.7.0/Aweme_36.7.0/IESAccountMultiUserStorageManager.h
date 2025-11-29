@class MMKV, NSObject;
@protocol OS_dispatch_queue;

@interface IESAccountMultiUserStorageManager : NSObject

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;

+ (id)sharedManager;

- (id)currentUserModel;
- (id)multiUserList;
- (id)transferModelFromResponse:(id)a0 modelClass:(Class)a1;
- (void)addMultiUser:(id)a0;
- (void)updateMultiUserListWithUserInfoList:(id)a0 callback:(id /* block */)a1;
- (void)updateMultiUserMap:(id)a0;
- (id)multiUserMap;
- (void)handleGetVCDAuthListResponse:(id)a0;
- (void)handleGetMultiListResponse:(id)a0 callback:(id /* block */)a1;
- (void)updateMultiUserList:(id)a0;
- (void)clearMultiUserList;
- (void)deleteMultiUserIdList:(id)a0 callback:(id /* block */)a1;
- (id)multiUserSecUserIdList;
- (id)userModelWithUserId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
