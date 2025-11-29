@class NSString;

@interface AnnieHandleBattleBgImageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *topBgImage;
@property (copy, nonatomic) NSString *bottomBgImage;
@property (copy, nonatomic) NSString *wholeBgImage;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
