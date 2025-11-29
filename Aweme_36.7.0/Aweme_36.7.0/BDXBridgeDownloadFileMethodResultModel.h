@class NSNumber, NSDictionary, NSString;

@interface BDXBridgeDownloadFileMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *clientCode;
@property (retain, nonatomic) NSNumber *httpCode;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSDictionary *response;
@property (copy, nonatomic) NSString *filePath;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
