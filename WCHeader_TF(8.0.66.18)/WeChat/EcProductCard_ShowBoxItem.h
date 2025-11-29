@class NSString, EcProductCard_CouponInfo, EcProductCard_LimitDiscountInfo, EcProductCard_GuaranteeInfo, EcProductCard_DescWordInfo, EcProductCard_ShowBoxPictureInfo, NSData;

@interface EcProductCard_ShowBoxItem : WXPBGeneratedMessage

@property (readonly, nonatomic) EcProductCard_CouponInfo *couponInfo;
@property (readonly, nonatomic) EcProductCard_LimitDiscountInfo *limitDiscountInfo;
@property (readonly, nonatomic) EcProductCard_DescWordInfo *descWordInfo;
@property (readonly, nonatomic) EcProductCard_GuaranteeInfo *guaranteeInfo;
@property (readonly, nonatomic) EcProductCard_ShowBoxPictureInfo *pictureInfo;
@property (nonatomic) unsigned int showBoxItemType;
@property (retain, nonatomic) NSData *showBoxItem;
@property (nonatomic) unsigned int showBoxElementContextType;
@property (retain, nonatomic) NSString *extraReportData;
@property (retain, nonatomic) NSString *showBoxItemJson;

+ (void)initialize;

@end
