@class BaseRequest, EcsCombineCouponReq, NSString, NSMutableArray;

@interface MmecGenPresentOrderV2Req : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *shopOrders;
@property (nonatomic) unsigned int sendType;
@property (nonatomic) unsigned int takeMethod;
@property (nonatomic) unsigned int reqSrc;
@property (retain, nonatomic) EcsCombineCouponReq *combineCouponInfo;
@property (nonatomic) BOOL isB2CFreePresent;
@property (nonatomic) unsigned long long b2CActivityId;
@property (nonatomic) unsigned int miniScene;
@property (retain, nonatomic) NSString *sceneNote;

+ (void)initialize;

@end
