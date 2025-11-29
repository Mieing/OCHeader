@class NSDictionary, NSString, NSArray;

@interface CJPayGrowthDecisionResponse : CJPayBaseResponse

@property (copy, nonatomic) NSDictionary *exts;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSString *growthModelViews;
@property (copy, nonatomic) NSArray *growthModelViewList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
