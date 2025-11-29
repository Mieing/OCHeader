@class NSRecursiveLock, DYAAccountModel, AWELoginDataStoreService, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface DYAUserPersistence : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableArray *users;
@property (retain, nonatomic) DYAAccountModel *user;
@property (retain, nonatomic) AWELoginDataStoreService *dataStoreService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;

+ (id)sharedInstance;

- (BOOL)isAssistRegister;
- (BOOL)isPhoneBinded;
- (BOOL)isValidData:(id)a0;
- (unsigned long long)maxAccountNumber;
- (BOOL)isCommercialAccount;
- (id)userForUID:(id)a0;
- (BOOL)persistAccount:(id)a0 source:(id)a1;
- (void)loadAccountMessage;
- (void)logCurrentUsers;
- (long long)isPrecisionLossWithSDKUid:(id)a0 accountUid:(id)a1;
- (void)trackUserNotSyncWithAccountUid:(id)a0 source:(id)a1 sdkUid:(id)a2 isPrecisionLoss:(long long)a3;
- (void)trackUserCorrectResultWithAccountUid:(id)a0 sdkUid:(id)a1 result:(id)a2 source:(id)a3 hasFetchedUser:(BOOL)a4;
- (BOOL)updateAccount:(id)a0 source:(id)a1;
- (void)userDidChange:(id)a0 oriUser:(id)a1;
- (void)checkAndCorrectUser:(id)a0 source:(id)a1 isRelationUser:(BOOL)a2;
- (void)storeCurrentAccount:(id)a0 allAccounts:(id)a1 scene:(id)a2 tag:(unsigned int)a3;
- (void)removeCurrentUserRelationUserWithUidIfNeeded:(id)a0;
- (void)trackSaveUserError:(id)a0 account:(id)a1 isList:(BOOL)a2 isSingleAccount:(BOOL)a3;
- (id)readObjectFromUDForKey:(id)a0;
- (id)readObjectFromAWEStorageForKey:(id)a0;
- (id)readObjectFromSingleFile;
- (int)storeObject:(id)a0 forKey:(id)a1 tag:(unsigned int)a2;
- (void)storeDataToFileWithUser:(id)a0 users:(id)a1 scene:(id)a2 tag:(unsigned int)a3;
- (BOOL)isSafePhoneBinded;
- (void)migrateUpdateAccount:(id)a0;
- (BOOL)clearAccountWithUID:(id)a0;
- (BOOL)clearAccountsWithUIDs:(id)a0;
- (void)clearAllAccounts;
- (id)currentUserBusinessModel;
- (BOOL)isSafePhoneOrPhoneBinded;
- (id)currentAccountUidType;
- (BOOL)isEmailBinded;
- (id)userID;
- (id)currentAccount;
- (void).cxx_destruct;
- (id)allAccounts;
- (id)init;
- (BOOL)isLogin;

@end
