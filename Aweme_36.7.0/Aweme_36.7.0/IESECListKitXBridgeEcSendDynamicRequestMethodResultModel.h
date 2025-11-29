@class NSNumber, NSDictionary;

@interface IESECListKitXBridgeEcSendDynamicRequestMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *httpCode;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSDictionary *response;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
