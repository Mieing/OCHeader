@class NSString, NSDictionary;

@interface IESLiveMallDeliveryRecordParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *actionType;
@property (nonatomic) BOOL isSuccess;
@property (copy, nonatomic) NSDictionary *deliveryRecord;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
