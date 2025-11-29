@class AWESearchMerchandiseEnterShopLeftIcon, NSString, NSDictionary, AWESearchMerchandiseBackgroundColor, AWEURLModel;

@interface AWESearchMerchandiseShopInfo : AWEBaseApiModel

@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *shopName;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) long long jumpType;
@property (copy, nonatomic) NSString *shopID;
@property (retain, nonatomic) NSString *storeID;
@property (retain, nonatomic) NSString *shopNameColor;
@property (retain, nonatomic) NSString *shopNameBackgroundColor;
@property (nonatomic) long long uiStyle;
@property (copy, nonatomic) AWEURLModel *shopLogo;
@property (copy, nonatomic) NSString *enterShopText;
@property (copy, nonatomic) NSDictionary *extraInfoMap;
@property (retain, nonatomic) AWESearchMerchandiseBackgroundColor *enterShopTextColor;
@property (retain, nonatomic) AWESearchMerchandiseBackgroundColor *enterShopIconColor;
@property (retain, nonatomic) AWESearchMerchandiseEnterShopLeftIcon *enterShopLeftIcon;
@property (nonatomic) BOOL isBGHidden;
@property (copy, nonatomic) NSString *enterShopLowestPrice;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
