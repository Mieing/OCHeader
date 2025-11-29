@class NSString;

@interface IESIMCodeGenTipsExtraModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *linkType;
@property (copy, nonatomic) NSString *scene;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
