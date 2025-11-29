@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeLiveSendByteLinkApiRequestMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *serviceID;
@property (copy, nonatomic) NSString *payload;
@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSDictionary *headers;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
