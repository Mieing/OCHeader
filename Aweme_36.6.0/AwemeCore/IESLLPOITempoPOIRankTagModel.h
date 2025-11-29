@class NSString, IESLLPOITempoPOIRankStyleModel;

@interface IESLLPOITempoPOIRankTagModel : IESLLPOITempoBaseTagModel

@property (copy, nonatomic) IESLLPOITempoPOIRankStyleModel *rankStyle;
@property (copy, nonatomic) NSString *rankDesc;
@property (nonatomic) long long rankType;

+ (id)rankStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
