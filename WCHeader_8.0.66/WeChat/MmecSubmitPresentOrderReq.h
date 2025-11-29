@class BaseRequest, EcsPresentOrder, NSString, EcsCombineCouponReq, NSMutableArray, EcsCouponRiskInfo;

@interface MmecSubmitPresentOrderReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) EcsPresentOrder *presentOrder;
@property (retain, nonatomic) NSMutableArray *shopOrders;
@property (nonatomic) unsigned long long uniqueId;
@property (nonatomic) unsigned long long useruin;
@property (nonatomic) unsigned int sendType;
@property (nonatomic) unsigned int takeMethod;
@property (nonatomic) unsigned int reqSrc;
@property (retain, nonatomic) NSString *finderPresentInfoJson;
@property (retain, nonatomic) EcsCombineCouponReq *combineCouponInfo;
@property (retain, nonatomic) EcsCouponRiskInfo *couponRiskInfo;

+ (void)initialize;

@end
