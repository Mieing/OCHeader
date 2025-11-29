@class NSString, NSNumber;

@interface AWEAdVideoLiveHeadPendantQponInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *counponToken;
@property (retain, nonatomic) NSNumber *exchangeValue;
@property (retain, nonatomic) NSNumber *expireTime;
@property (retain, nonatomic) NSNumber *qponAction;
@property (retain, nonatomic) NSNumber *qponThreshold;
@property (retain, nonatomic) NSNumber *qponType;
@property (retain, nonatomic) NSNumber *qponValue;
@property (copy, nonatomic) NSString *qponScene;
@property (retain, nonatomic) NSNumber *taskAwardBalanceMargin;
@property (copy, nonatomic) NSString *ecomLiveParams;
@property (copy, nonatomic) NSString *expireTimeStr;
@property (copy, nonatomic) NSString *validScopeText;
@property (retain, nonatomic) NSNumber *isCouponShorten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
