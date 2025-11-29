@class NSNumber, NSString;

@interface BDXBridgePoiLocationServiceError : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
