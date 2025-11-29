@class WCOSharedList, NSString, NSMutableArray, BaseResponse;

@interface GetWeChatOutCouponsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *coupons;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *imgPath;
@property (retain, nonatomic) NSString *urlPath;
@property (retain, nonatomic) NSString *balance;
@property (retain, nonatomic) NSString *pvwording;
@property (retain, nonatomic) NSString *smsDesc;
@property (retain, nonatomic) WCOSharedList *sharedList;
@property (retain, nonatomic) NSString *couponPrice;
@property (retain, nonatomic) NSString *outUrlPath;
@property (retain, nonatomic) NSString *currencySymbol;
@property (retain, nonatomic) NSString *webPayListUrl;
@property (retain, nonatomic) NSString *packageMsg;
@property (nonatomic) unsigned int packageCount;
@property (retain, nonatomic) NSMutableArray *packageList;

+ (void)initialize;

@end
