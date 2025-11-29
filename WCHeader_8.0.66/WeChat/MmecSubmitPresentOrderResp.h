@class EcsJumpInfo, EcsPresentOrder, EcsCouponRiskInfo, EcsCombineCouponResp, EcsOrderFinderSecInfo, BaseResponse, EcsPriceInfo, NSMutableArray;

@interface MmecSubmitPresentOrderResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) EcsPresentOrder *presentOrder;
@property (retain, nonatomic) NSMutableArray *shopOrders;
@property (retain, nonatomic) EcsPriceInfo *priceInfo;
@property (nonatomic) unsigned long long presentOrderId;
@property (retain, nonatomic) EcsOrderFinderSecInfo *secInfo;
@property (retain, nonatomic) EcsCombineCouponResp *combineCouponInfo;
@property (retain, nonatomic) EcsCouponRiskInfo *couponRiskInfo;
@property (retain, nonatomic) EcsJumpInfo *errJumpInfo;
@property (nonatomic) BOOL useErrJumpInfo;
@property (nonatomic) unsigned int nextAction;
@property (nonatomic) BOOL cannotUseB2CFreePresent;
@property (nonatomic) unsigned int errActionCode;

+ (void)initialize;

@end
