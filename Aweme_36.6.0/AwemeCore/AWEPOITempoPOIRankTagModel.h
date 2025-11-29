@class AWEPOITempoPOIRankStyleModel, NSString;

@interface AWEPOITempoPOIRankTagModel : AWEPOITempoBaseTagModel

@property (copy, nonatomic) AWEPOITempoPOIRankStyleModel *rankStyle;
@property (copy, nonatomic) NSString *rankDesc;
@property (nonatomic) long long rankType;

+ (id)rankStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
