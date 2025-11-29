@class UIColor, NSString;

@interface AWECitySelectAppearance : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) UIColor *backgroundUIColor;
@property (readonly, copy, nonatomic) UIColor *textUIColor;
@property (readonly, copy, nonatomic) UIColor *separatorUIColor;
@property (readonly, copy, nonatomic) UIColor *sectionIndexUIColor;
@property (readonly, copy, nonatomic) UIColor *sectionIndexBackgroundUIColor;
@property (readonly, copy, nonatomic) UIColor *searchBarTextUIColor;
@property (readonly, copy, nonatomic) UIColor *searchBarBackgroundUIColor;
@property (readonly, copy, nonatomic) UIColor *searchBarPlaceholderTextUIColor;
@property (readonly, copy, nonatomic) UIColor *searchBarCancelTextUIColor;
@property (readonly, copy, nonatomic) UIColor *titleUIColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *separatorColor;
@property (copy, nonatomic) NSString *sectionIndexColor;
@property (copy, nonatomic) NSString *sectionIndexBackgroundColor;
@property (copy, nonatomic) NSString *searchBarTextColor;
@property (copy, nonatomic) NSString *searchBarBackgroundColor;
@property (copy, nonatomic) NSString *searchBarPlaceholderTextColor;
@property (copy, nonatomic) NSString *searchBarCancelTextColor;
@property (copy, nonatomic) NSString *titleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
