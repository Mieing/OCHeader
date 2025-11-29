@class NSString;

@interface IESIMUGCodeGenMessageTabUiInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *animationKey;
@property (copy, nonatomic) NSString *scene;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
