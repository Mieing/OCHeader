@class NSString;

@interface MMListenMembershipJoinInfo_WecoinSchemeInfo_PackageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *packageId;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) NSString *packageWording;
@property (nonatomic) BOOL isSubscribe;
@property (nonatomic) unsigned long long originalAmount;
@property (retain, nonatomic) NSString *packageSubWording;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) BOOL showDiscountTitle;
@property (retain, nonatomic) NSString *confirmText;
@property (retain, nonatomic) NSString *bottomWording;

+ (void)initialize;

@end
