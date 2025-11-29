@class FBSDKLoginManager;

@interface FacebookAuth : MMObject {
    FBSDKLoginManager *m_fbLogin;
}

@property (nonatomic) long long m_uiFacebookUsageType;

+ (void)tryInitSDK;
+ (void)asyncGetMeInfoWithSize:(struct CGSize { double x0; double x1; })a0 completionBlock:(id /* block */)a1;

- (id)init;
- (void)fbDidLogin;
- (void)fbDidNotLogin:(BOOL)a0;
- (void)fbDidExtendToken;
- (id)getAccessToken;
- (void)tryAuth;
- (void)requestNewPermission;
- (void)reAuth;
- (void).cxx_destruct;

@end
