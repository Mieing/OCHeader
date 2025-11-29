@class NSString, NSNumber;

@interface IESLLLiveTicketModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *couponRule;
@property (copy, nonatomic) NSString *couponType;
@property (copy, nonatomic) NSString *postTicketPrice;
@property (copy, nonatomic) NSString *ticketMerchantId;
@property (nonatomic) BOOL supportAutoCollect;
@property (nonatomic) unsigned long long couponStatus;
@property (copy, nonatomic) NSNumber *launchID;
@property (copy, nonatomic) NSString *launchIDV2;
@property (copy, nonatomic) NSNumber *launchType;
@property (copy, nonatomic) NSString *benefitID;
@property (copy, nonatomic) NSNumber *benefitType;
@property (copy, nonatomic) NSString *xidempotentId;
@property (copy, nonatomic) NSNumber *assignRecordID;
@property (copy, nonatomic) NSNumber *couponTypeNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)transformCouponStatusFromNumberToString;
- (void).cxx_destruct;

@end
