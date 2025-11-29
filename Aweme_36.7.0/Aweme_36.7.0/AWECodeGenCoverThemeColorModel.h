@class NSString;

@interface AWECodeGenCoverThemeColorModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *firstColor;
@property (copy, nonatomic) NSString *secondColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
