@class NSString;

@interface AWEECMallDeliveryInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *process;
@property (copy, nonatomic) NSString *failProcess;
@property (nonatomic) long long failCode;
@property (copy, nonatomic) NSString *handleType;
@property (nonatomic) BOOL isSuccessWhenLeaveMall;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isDeliveryPlatform;
@property (nonatomic) BOOL firstDelivery;
@property (nonatomic) BOOL deliveryFinished;
@property (copy, nonatomic) NSString *launchType;
@property (copy, nonatomic) NSString *deliverySchema;
@property (copy, nonatomic) NSString *mallSchema;
@property (copy, nonatomic) NSString *deliveryType;
@property (copy, nonatomic) NSString *deliveryUniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
