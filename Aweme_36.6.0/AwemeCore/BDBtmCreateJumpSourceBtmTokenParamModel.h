@class NSString, NSDictionary;

@interface BDBtmCreateJumpSourceBtmTokenParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcm;
@property (copy, nonatomic) NSDictionary *options;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
