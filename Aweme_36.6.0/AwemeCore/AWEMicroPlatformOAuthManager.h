@class NSDictionary, BDPOpenPlatformAuthModel, BDPlatformSDKNetApi;
@protocol AWEMicroPlatformOAuthManagerDelegate;

@interface AWEMicroPlatformOAuthManager : NSObject

@property (nonatomic) BOOL isInLogin;
@property (retain, nonatomic) BDPlatformSDKNetApi *sdkNetApi;
@property (copy, nonatomic) NSDictionary *normalScopes;
@property (copy, nonatomic) NSDictionary *pageDetail;
@property (retain, nonatomic) BDPOpenPlatformAuthModel *authModel;
@property (weak, nonatomic) id<AWEMicroPlatformOAuthManagerDelegate> delegate;

+ (id)errorWithErrMsg:(id)a0 code:(long long)a1;

- (BOOL)canSkipConfirm;
- (id)joinedScopesString;
- (id)genericClientKey;
- (id)normalScopeItems;
- (void)fetchUserInfo;
- (void)authorizeWithScope:(id)a0;
- (void)setItemCellHeightWithItem:(id)a0;
- (id)identityScopeString;
- (void)fetchTicket;
- (void)setItemTitle:(id)a0 scopeMap:(id)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (long long)maxWidth;

@end
