@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenLeftCustomBtnConfigModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *leftCustomBtnIconModel;
@property (copy, nonatomic) NSString *leftCustomBtnText;
@property (copy, nonatomic) NSString *leftCustomBtnOpenSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
