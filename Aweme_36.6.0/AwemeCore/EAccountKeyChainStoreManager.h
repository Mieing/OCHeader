@interface EAccountKeyChainStoreManager : NSObject

+ (void)deleteFakeUUID;
+ (void)deleteUUID;
+ (id)getFakeUUID;
+ (id)loadFakeUUID;
+ (id)loadUUID;
+ (id)randomUUIDString;
+ (void)saveFakeUUID:(id)a0;
+ (void)saveUUID:(id)a0;
+ (id)uuidFormater:(id)a0;

@end
