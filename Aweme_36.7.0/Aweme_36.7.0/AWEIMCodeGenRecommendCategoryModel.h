@class NSString, NSDictionary;

@interface AWEIMCodeGenRecommendCategoryModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *modelID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *trackingExt;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
