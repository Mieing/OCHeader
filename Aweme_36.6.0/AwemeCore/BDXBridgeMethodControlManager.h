@class NSDictionary, BDXBridgeAuthFeAuthConfig, NSString;
@protocol BDXBridgeMethodControlAuthTypeDelegate;

@interface BDXBridgeMethodControlManager : NSObject

@property (copy, nonatomic) NSDictionary *methodTracking;
@property (copy, nonatomic) BDXBridgeAuthFeAuthConfig *authConfig;
@property (weak, nonatomic) id<BDXBridgeMethodControlAuthTypeDelegate> authTypeDelegate;
@property (nonatomic) BOOL enableAuth;
@property (nonatomic) BOOL enableLynxCallLimitVerify;
@property (copy, nonatomic) NSString *verifyUrl;
@property (copy, nonatomic) NSString *sourceUrl;

+ (id)getJSBParamsRewritePayload:(id)a0 callerParams:(id)a1 invokeUrl:(id)a2 invokeFeId:(id)a3;

- (id)initWithAuthConfig:(id)a0;
- (long long)getAuthResultFromRequestCheckResult:(id)a0;
- (id)getReportInfoFromRequestCheckResult:(id)a0;
- (id)initWithMethodControlLimitInfo:(id)a0;
- (long long)isControlledMethod:(id)a0 forURL:(id)a1 type:(long long)a2;
- (long long)isAuthorizedToCallMethod:(id)a0 methodAccessType:(long long)a1;
- (id)checkMethodRequestParamsWithInfo:(id)a0;
- (id)getAuthTypeWithInfo:(id)a0;
- (void).cxx_destruct;

@end
