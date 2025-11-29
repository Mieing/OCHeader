@class BDXBridgeGetUserInfoUserInfo;

@interface BDXBridgeGetUserInfoMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL isLogin;
@property (nonatomic) BOOL hasLoggedIn;
@property (retain, nonatomic) BDXBridgeGetUserInfoUserInfo *userInfo;

+ (id)userInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
