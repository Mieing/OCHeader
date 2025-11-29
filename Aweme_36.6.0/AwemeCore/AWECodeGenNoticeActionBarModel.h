@class NSString, NSDictionary, AWECodeGenIconUrlModel, AWECodeGenThemeColorModel, NSArray;

@interface AWECodeGenNoticeActionBarModel : AWEBaseDataModel

@property (nonatomic) long long actionBarType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWECodeGenThemeColorModel *backgroundColorModel;
@property (retain, nonatomic) AWECodeGenThemeColorModel *textColorModel;
@property (retain, nonatomic) AWECodeGenIconUrlModel *iconModel;
@property (copy, nonatomic) NSDictionary *extraMap;
@property (copy, nonatomic) NSArray *concatBarsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
