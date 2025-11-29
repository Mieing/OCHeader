@class OfflineStoreInfoList, NSString, CouponCodeList, ValidityPeriodInfo;

@interface OrderCouponCodeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *couponcodeId;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) CouponCodeList *couponcodes;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (nonatomic) unsigned int qrcodeExpireTime;
@property (retain, nonatomic) ValidityPeriodInfo *validityPeriodInfo;
@property (retain, nonatomic) OfflineStoreInfoList *offlineStoreInfos;

+ (void)initialize;

@end
