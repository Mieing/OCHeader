@class NSString;

@interface ACCCouponWriteOffResponseData : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long redpacketStatus;
@property (copy, nonatomic) NSString *orderId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
