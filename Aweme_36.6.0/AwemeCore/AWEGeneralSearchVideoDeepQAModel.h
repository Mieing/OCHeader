@class NSString, NSArray, AWEAwemeModel, AWEGeneralSearchVideoDeepQAUIConfigModel, AWEGeneralSearchVideoDeepQATitleModel;

@interface AWEGeneralSearchVideoDeepQAModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *deepQAType;
@property (retain, nonatomic) AWEGeneralSearchVideoDeepQAUIConfigModel *UIConfigModel;
@property (retain, nonatomic) AWEGeneralSearchVideoDeepQATitleModel *titleModel;
@property (copy, nonatomic) NSString *shortAnswer;
@property (retain, nonatomic) AWEAwemeModel *awemeInfo;
@property (retain, nonatomic) NSArray *commentList;

+ (id)commentListJSONTransformer;
+ (id)awemeInfoJSONTransformer;
+ (id)UIConfigModelJSONTransformer;
+ (id)titleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
