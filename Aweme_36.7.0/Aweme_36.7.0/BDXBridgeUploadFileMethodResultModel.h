@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeUploadFileMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) id response;
@property (retain, nonatomic) NSNumber *clientCode;
@property (retain, nonatomic) NSNumber *httpCode;
@property (copy, nonatomic) NSDictionary *header;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
