@class NSString, AWECodeGenThemeColorModel;

@interface AWECodeGenSubContentModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWECodeGenThemeColorModel *textColorModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
