@class NSData, FinderLivePaymentSetting;

@interface FinderLiveNoticeInfo_PayInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isPay;
@property (nonatomic) unsigned int price;
@property (nonatomic) BOOL hasPurchase;
@property (nonatomic) unsigned int needGetPaymentItems;
@property (retain, nonatomic) NSData *paymentBuff;
@property (nonatomic) unsigned int purchaseUserCount;
@property (retain, nonatomic) FinderLivePaymentSetting *paymentSetting;

+ (void)initialize;

@end
