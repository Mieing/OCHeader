@class TTADeviceLoginUserInfo;

@interface TTAccountDeviceLoginInfo : NSObject

@property (retain, nonatomic) TTADeviceLoginUserInfo *loginOnlyInfo;

+ (id)fetchDeviceLoginInfoWithType:(long long)a0 timeRange:(long long)a1 completetion:(id /* block */)a2;
+ (id)trustedDeviceOnekeyLoginWithCompleted:(id /* block */)a0;
+ (id)trustedDeviceOnekeyLoginWithModel:(id)a0 completed:(id /* block */)a1;
+ (id)canDeviceOnekeyLoginWithCompleted:(id /* block */)a0;
+ (id)canDeviceOnekeyLoginWithModel:(id)a0 completed:(id /* block */)a1;
+ (id)trustedDeviceOnekeyLoginContinueWithTicket:(id)a0 completed:(id /* block */)a1;
+ (id)latestLocalDeviceLoginInfo;
+ (id)fetchHistoryLoginInfoWithDuplicateUid:(BOOL)a0;
+ (void)updateLastLoginType:(long long)a0 accountInfo:(id)a1;
+ (void)updateLastLoginInfoWithContinue;
+ (void)matchLoginInfoWithType:(long long)a0 infoDic:(id)a1 results:(id)a2;
+ (void)insertLoginInfo:(id)a0;
+ (BOOL)matchWithUserInfo:(id)a0;
+ (void)updateLastLoginType:(long long)a0 accountInfo:(id)a1 user:(id)a2;
+ (void)updateLatestedLocalDeviceLoginInfo:(id)a0;
+ (id)sharedInstance;

- (void)setCurrentloginOnlyInfoWithType:(long long)a0 accountInfo:(id)a1;
- (void)updateLastLoginInfo:(long long)a0 accountInfo:(id)a1 isLoginContinue:(BOOL)a2 userEntity:(id)a3;
- (id)currentloginOnlyInfo;
- (void).cxx_destruct;

@end
