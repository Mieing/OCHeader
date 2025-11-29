@class NSNumber, NSString, NSDictionary;

@interface BDGetBcmChainV2ParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *chainLength;
@property (nonatomic) BOOL isDomainStandard;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcm;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
