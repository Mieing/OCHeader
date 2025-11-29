@class IESECShopLiveVisitorNumberStyle, NSString, IESECShopSearchBarStyle, IESECShopScoreStyle, IESECShopFlagshipStyle, IESECShopSellingPointStyle;

@interface IESECShopHeaderStyleConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECShopScoreStyle *scoreStyle;
@property (retain, nonatomic) IESECShopFlagshipStyle *flagshipStyle;
@property (retain, nonatomic) IESECShopSearchBarStyle *searchBarStyle;
@property (retain, nonatomic) IESECShopSellingPointStyle *sellingPointStyle;
@property (retain, nonatomic) IESECShopSellingPointStyle *sellingPointLivingStyle;
@property (retain, nonatomic) IESECShopLiveVisitorNumberStyle *liveVisitorNumberStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
