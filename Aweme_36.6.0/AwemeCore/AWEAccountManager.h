@class NSString, NSMutableArray;

@interface AWEAccountManager : NSObject <AWEAccountManagerProtocol> {
    BOOL _isThirdPlatformBinded[6];
}

@property (retain, nonatomic) NSMutableArray *thirdAccountUsernameStrArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserCenterModuleServiceDOUYINHTSAdapterClass;
+ (Class)aAWEUserCenterModuleServiceCommonAdapterClass;

- (BOOL)isPhoneBinded;
- (id)aAWEUserCenterModuleServiceDOUYINHTSAdapter;
- (id)aAWEUserCenterModuleServiceCommonAdapter;
- (void)fetchConnectUserProfileCallback:(id /* block */)a0;
- (void)requestUnbindWithPlatform:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)isThirdPlatformBindedWithType:(unsigned long long)a0;
- (id)thirdPlatformUsernameWithPlatformType:(unsigned long long)a0;
- (BOOL)isTouXiDongSyncForbidden;
- (void)requestBindWithPlatform:(unsigned long long)a0 completion:(id /* block */)a1;
- (unsigned long long)_transferToHTSAccountPlatformFrom:(unsigned long long)a0;
- (id)phoneString;
- (void)requestBusinessAccountFallbackEntranceData:(id /* block */)a0;
- (void).cxx_destruct;
- (void)refresh;

@end
