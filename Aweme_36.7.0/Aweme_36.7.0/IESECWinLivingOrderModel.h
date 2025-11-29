@class NSString;

@interface IESECWinLivingOrderModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *appointmentText;
@property (copy, nonatomic) NSString *appointmentId;
@property (copy, nonatomic) NSString *appointmentSchema;
@property (nonatomic) unsigned long long appointmentStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
