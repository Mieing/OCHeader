@class NSNumber, AWEDoubleColumnSearchMerchandiseActivityIcon, NSString;

@interface AWESearchPOIFilterStyleModel : AWEDoubleColumnSearchMerchandiseFilterStyleModel

@property (copy, nonatomic) NSNumber *isTitleAlwaysUseBoldFont;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *defaultCityHeadIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *selectingCityHeadIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *selectedCityHeadIcon;
@property (copy, nonatomic) NSString *strDefaultSubTextColor;
@property (copy, nonatomic) NSString *strSelectedSubTextColor;
@property (copy, nonatomic) NSString *strSelectingSubTextColor;

+ (BOOL)usePOISearchFilterStyleModelClassWithJSONDictionary:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
