@class NSString;

@interface AWECodeGenThemeColorModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *darkColor;
@property (copy, nonatomic) NSString *lightColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
