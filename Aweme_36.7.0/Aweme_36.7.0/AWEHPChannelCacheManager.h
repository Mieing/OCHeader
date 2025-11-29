@class AWEHPTabStorageManager;

@interface AWEHPChannelCacheManager : NSObject

@property (retain, nonatomic) AWEHPTabStorageManager *storageManager;

+ (id)sharedInstance;

- (id)p_getNotLoginUserID;
- (id)p_getResponseModelWithUserID:(id)a0;
- (id)p_getTopTabWithBottomTab:(id)a0;
- (void)p_mergeEditTabWithUserID:(id)a0 bottomTab:(id)a1 topTab:(id)a2;
- (BOOL)saveResponse:(id)a0 userID:(id)a1;
- (id)getEditTabsModelWithUserID:(id)a0;
- (BOOL)p_mergeBottomEditReplaceResultIfNeedWithBottomTab:(id)a0 topTab:(id)a1 editModel:(id)a2;
- (void)clearUserEditTabModelWithUserID:(id)a0;
- (BOOL)saveEditTabModel:(id)a0 userID:(id)a1;
- (id)getResponseModelWithUserID:(id)a0;
- (id)getResponseDataWithUserID:(id)a0;
- (id)p_getCurrentUserID;
- (void).cxx_destruct;

@end
