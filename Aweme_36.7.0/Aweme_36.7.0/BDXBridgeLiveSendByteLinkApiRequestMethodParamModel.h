@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeLiveSendByteLinkApiRequestMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *serviceID;
@property (copy, nonatomic) NSString *payload;
@property (retain, nonatomic) NSNumber *timeout;
@property (retain, nonatomic) NSNumber *method;
@property (copy, nonatomic) NSString *httpURL;
@property (copy, nonatomic) NSDictionary *queryParams;
@property (copy, nonatomic) NSDictionary *headers;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
