@class NSString, AWECodeGenThemeColorModel;

@interface AWECodeGenCEMLabelModel : AWEBaseDataModel

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWECodeGenThemeColorModel *backgroundColorModel;
@property (retain, nonatomic) AWECodeGenThemeColorModel *textColorModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
