@class NSString;

@interface IESIMUGCodeGenPrivateUIInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *widgetSchema;
@property (copy, nonatomic) NSString *iconUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
