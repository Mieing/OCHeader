@class FinderWindowProductInfo, NSData, FinderShopCouponInfo;

@interface FinderLiveShopWindowItem : WXPBGeneratedMessage

@property (readonly, nonatomic) FinderShopCouponInfo *couponInfo;
@property (readonly, nonatomic) FinderWindowProductInfo *productInfo;
@property (nonatomic) unsigned int itemType;
@property (retain, nonatomic) NSData *extInfo;

+ (void)initialize;

@end
