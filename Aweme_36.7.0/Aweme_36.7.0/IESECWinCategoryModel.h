@class NSString, IESECURLModel, IESECWinGradientColor, IESECWinCategoryConfig;

@interface IESECWinCategoryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *categoryIDs;
@property (copy, nonatomic) NSString *selectedColor;
@property (copy, nonatomic) NSString *unselectedColor;
@property (copy, nonatomic) NSString *selectedIndicatorColor;
@property (copy, nonatomic) NSString *selectedBackgroundColor;
@property (nonatomic) long long categoryType;
@property (retain, nonatomic) IESECURLModel *selectedIconUrl;
@property (retain, nonatomic) IESECURLModel *unselectedIconUrl;
@property (retain, nonatomic) IESECURLModel *selectedIconTabUrl;
@property (retain, nonatomic) IESECURLModel *unselectedIconTabUrl;
@property (retain, nonatomic) IESECWinGradientColor *backgroundColor;
@property (retain, nonatomic) IESECWinCategoryConfig *categoryConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
