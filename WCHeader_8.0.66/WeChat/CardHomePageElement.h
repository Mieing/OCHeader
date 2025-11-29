@class NSString, CardMiniAppInfo, NSMutableArray, CardElementMchLabel;

@interface CardHomePageElement : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardPackMerchantId;
@property (retain, nonatomic) NSString *cardElementMchIcon;
@property (retain, nonatomic) NSString *cardElementMchName;
@property (retain, nonatomic) NSString *cardElementTradeRelation;
@property (retain, nonatomic) NSMutableArray *cardElementMchLabel;
@property (nonatomic) int cardElementOpType;
@property (retain, nonatomic) NSString *cardElementJumpUrl;
@property (retain, nonatomic) CardMiniAppInfo *cardElementMiniAppInfo;
@property (retain, nonatomic) NSString *cardElementNativeUrl;
@property (retain, nonatomic) NSMutableArray *cardElementCouponList;
@property (retain, nonatomic) NSString *couponDetailWording;
@property (retain, nonatomic) NSString *couponDetailWordingColor;
@property (retain, nonatomic) CardMiniAppInfo *couponDetailMiniAppInfo;
@property (retain, nonatomic) CardElementMchLabel *mchActTag;
@property (nonatomic) unsigned int isExpandCouponList;
@property (nonatomic) unsigned int couponTotalNum;
@property (nonatomic) unsigned int expandCouponNum;
@property (nonatomic) unsigned long long lastReceiveTime;

+ (void)initialize;

@end
