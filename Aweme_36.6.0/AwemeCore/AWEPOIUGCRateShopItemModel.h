@class NSString;

@interface AWEPOIUGCRateShopItemModel : AWEPOIContentItemModel

@property (nonatomic) BOOL isSelected;
@property (nonatomic) unsigned long long barType;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL hasTrackedShow;
@property (copy, nonatomic) NSString *brandID;
@property (copy, nonatomic) NSString *brandName;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)poiIDJSONTransformer;

- (void)updateWithBarParamsModel:(id)a0;
- (void).cxx_destruct;
- (id)itemName;
- (id)itemID;

@end
