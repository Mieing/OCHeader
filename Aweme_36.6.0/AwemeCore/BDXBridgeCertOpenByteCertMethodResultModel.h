@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeCertOpenByteCertMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSNumber *certStatus;
@property (retain, nonatomic) NSNumber *manualStatus;
@property (retain, nonatomic) NSNumber *ageRange;
@property (copy, nonatomic) NSDictionary *extData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
