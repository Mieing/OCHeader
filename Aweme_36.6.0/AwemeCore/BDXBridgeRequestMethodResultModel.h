@class NSNumber, NSDictionary, NSString;

@interface BDXBridgeRequestMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *httpCode;
@property (retain, nonatomic) NSNumber *clientCode;
@property (copy, nonatomic) NSDictionary *header;
@property (retain, nonatomic) id response;
@property (copy, nonatomic) NSString *rawResponse;
@property (retain, nonatomic) NSNumber *prefetchStatus;
@property (nonatomic) long long responseType;

+ (id)responseTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
