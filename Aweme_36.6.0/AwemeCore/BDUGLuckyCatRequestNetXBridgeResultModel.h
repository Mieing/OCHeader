@class NSNumber, NSDictionary, NSString;

@interface BDUGLuckyCatRequestNetXBridgeResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *httpCode;
@property (retain, nonatomic) NSDictionary *header;
@property (retain, nonatomic) NSDictionary *response;
@property (copy, nonatomic) NSString *prefetchStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
