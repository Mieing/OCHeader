@class NSString, NSNumber;

@interface IESECXBridgeMallDeliveryRecordMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *actionType;
@property (retain, nonatomic) NSNumber *isSuccess;
@property (retain, nonatomic) id deliveryRecord;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
