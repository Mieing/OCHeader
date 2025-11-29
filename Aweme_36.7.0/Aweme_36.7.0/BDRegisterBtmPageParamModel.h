@class NSString;

@interface BDRegisterBtmPageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *btm;
@property (retain, nonatomic) id pageEventParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
