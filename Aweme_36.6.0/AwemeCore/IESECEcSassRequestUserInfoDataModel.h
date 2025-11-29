@class NSNumber, NSString;

@interface IESECEcSassRequestUserInfoDataModel : IESLiveBridgeModel

@property (nonatomic) BOOL isLogin;
@property (retain, nonatomic) NSNumber *authStatus;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *authorization;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
