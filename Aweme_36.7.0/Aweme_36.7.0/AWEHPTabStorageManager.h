@class MMKV;

@interface AWEHPTabStorageManager : NSObject

@property (retain, nonatomic) MMKV *mmkv;

- (id)getResponseWithUserID:(id)a0;
- (BOOL)saveResponse:(id)a0 userID:(id)a1;
- (id)getEditTabsModelWithUserID:(id)a0;
- (void)clearUserEditTabModelWithUserID:(id)a0;
- (BOOL)saveEditTabModel:(id)a0 userID:(id)a1;
- (id)p_editTabModelStorageKeyWithUserID:(id)a0;
- (id)p_responseStorageKeyWithUserID:(id)a0;
- (void).cxx_destruct;

@end
