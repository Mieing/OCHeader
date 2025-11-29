@class NSString, NSNumber;

@interface BDGetBcmChainParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *biz;
@property (retain, nonatomic) NSNumber *chainLength;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
