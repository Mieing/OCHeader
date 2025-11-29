@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenOrderToolBarDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *toolBarText;
@property (copy, nonatomic) NSString *skipDescText;
@property (retain, nonatomic) AWECodeGenUrlModel *iconLightModel;
@property (retain, nonatomic) AWECodeGenUrlModel *iconDarkModel;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
