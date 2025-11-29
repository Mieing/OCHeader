@class NSString, WecoinNewUserTips, WecoinSubscriptionListEntrance, CoinBanner, BaseResponse;

@interface GetWecoinPageInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) long long wecoinBalance;
@property (nonatomic) long long incomeBalance;
@property (retain, nonatomic) NSString *wecoinBillUrl;
@property (retain, nonatomic) NSString *incomeBillUrl;
@property (nonatomic) BOOL showIncome;
@property (retain, nonatomic) NSString *qaUrl;
@property (retain, nonatomic) CoinBanner *banner;
@property (retain, nonatomic) WecoinNewUserTips *newUserTips;
@property (nonatomic) BOOL newUserDiscount;
@property (retain, nonatomic) WecoinSubscriptionListEntrance *subscriptionListEntrance;

+ (void)initialize;

@end
