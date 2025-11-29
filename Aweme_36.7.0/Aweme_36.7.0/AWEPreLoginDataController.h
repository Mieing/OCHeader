@class DYOneLoginUserModel, NSArray, NSMutableDictionary, DYLastLoginUserModel;

@interface AWEPreLoginDataController : NSObject

@property (copy, nonatomic) NSArray *accounts;
@property (nonatomic) BOOL enableOneLogin;
@property (nonatomic) BOOL isRequestTimeout;
@property (nonatomic) BOOL isRequestReturned;
@property (retain, nonatomic) DYOneLoginUserModel *oneLoginAccount;
@property (retain, nonatomic) DYLastLoginUserModel *lastOneLoginUser;
@property (copy, nonatomic) NSArray *lastOneLoginUsers;
@property (retain, nonatomic) DYLastLoginUserModel *lastLoginUser;
@property (retain, nonatomic) NSMutableDictionary *pendingCompletionBlockDict;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) unsigned long long trustSharedAccountFrom;
@property (retain, nonatomic) DYOneLoginUserModel *trustSharedUser;

+ (BOOL)enableLastOneLoginWithSecUID:(id)a0;
+ (BOOL)isExpiredWithTime:(long long)a0;
+ (void)saveFailureWithSecUID:(id)a0 time:(long long)a1;

- (void)enterLoginProcessWithCompletion:(id /* block */)a0 scene:(unsigned long long)a1;
- (long long)trustUsersCountFromServer;
- (void)storeRequestResult:(id)a0;
- (id)updateLastLoginDateTrustUsers:(id)a0;
- (void)keepTrustAccountsUpTodateWithCompletion:(id /* block */)a0 scene:(unsigned long long)a1;
- (void)requestTrustAccountsWithCompletion:(id /* block */)a0 scene:(unsigned long long)a1;
- (id)sharedUser;
- (void)updateLastOneLoginUser;
- (void)fetchTrustUsersWithCompletion:(id /* block */)a0 scene:(unsigned long long)a1;
- (id)paramsNeeded;
- (id)createParamsWithScene:(unsigned long long)a0;
- (void)storeTrustAccounts:(id)a0 scene:(unsigned long long)a1;
- (void)storeTrustShredUser:(id)a0;
- (id)jsonStringWithLastLoginList;
- (void).cxx_destruct;
- (void)requestTimeout;
- (id)init;

@end
