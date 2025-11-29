@class NSString;

@interface IESECEcSassRequestUserInfoParamModel : IESLiveBridgeModel

@property (nonatomic) BOOL withAuth;
@property (copy, nonatomic) NSString *source;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
