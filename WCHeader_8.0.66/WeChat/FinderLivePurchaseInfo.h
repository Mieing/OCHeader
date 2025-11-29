@class NSData, NSString;

@interface FinderLivePurchaseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int chargeFlag;
@property (nonatomic) BOOL isPurchased;
@property (nonatomic) unsigned int purchaseUserCount;
@property (nonatomic) unsigned long long purchaseHeat;
@property (nonatomic) unsigned int unitPriceInWecoin;
@property (nonatomic) unsigned int needGetPaymentItems;
@property (retain, nonatomic) NSData *paymentBuff;
@property (retain, nonatomic) NSString *promptWording;

+ (void)initialize;

- (void)setPromptWording:(id)a0;
- (id)promptWording;
- (void)setPaymentBuff:(id)a0;
- (id)paymentBuff;
- (void)setNeedGetPaymentItems:(unsigned int)a0;
- (unsigned int)needGetPaymentItems;
- (void)setUnitPriceInWecoin:(unsigned int)a0;
- (unsigned int)unitPriceInWecoin;
- (void)setPurchaseHeat:(unsigned long long)a0;
- (unsigned long long)purchaseHeat;
- (void)setPurchaseUserCount:(unsigned int)a0;
- (unsigned int)purchaseUserCount;
- (void)setIsPurchased:(BOOL)a0;
- (BOOL)isPurchased;
- (void)setChargeFlag:(unsigned int)a0;
- (unsigned int)chargeFlag;

@end
