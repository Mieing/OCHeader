@class NSNumber, NSString;

@interface BDXBridgeOpenPlatformGetLocationMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *coordinateType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
