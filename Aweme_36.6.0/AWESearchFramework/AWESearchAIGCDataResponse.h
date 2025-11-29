@class NSArray, AWEGeneralSearchExtraModel, AWEGeneralBusinessConfigModel;

@interface AWESearchAIGCDataResponse : AWESearchResultVerticalBaseDataResponse

@property (copy, nonatomic) NSArray *leafModels;
@property (retain, nonatomic) AWEGeneralBusinessConfigModel *businessConfigModel;
@property (retain, nonatomic) AWEGeneralSearchExtraModel *extraModel;

+ (id)extraModelJSONTransformer;
+ (id)businessConfigModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
