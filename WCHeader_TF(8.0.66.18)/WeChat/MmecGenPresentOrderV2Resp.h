@class EcsPriceInfo, EcsCouponRiskInfo, EcsPresentOrder, EcsCombineCouponResp, EcsJumpInfo, NSMutableArray, BaseResponse;

@interface MmecGenPresentOrderV2Resp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) EcsPresentOrder *presentOrder;
@property (retain, nonatomic) NSMutableArray *shopOrders;
@property (retain, nonatomic) EcsPriceInfo *priceInfo;
@property (nonatomic) unsigned long long uniqueId;
@property (retain, nonatomic) EcsCombineCouponResp *combineCouponInfo;
@property (retain, nonatomic) EcsCouponRiskInfo *couponRiskInfo;
@property (retain, nonatomic) EcsJumpInfo *errJumpInfo;
@property (nonatomic) BOOL useErrJumpInfo;
@property (nonatomic) unsigned int nextAction;
@property (nonatomic) BOOL cannotUseB2CFreePresent;
@property (nonatomic) unsigned int errActionCode;

+ (void)initialize;

@end
