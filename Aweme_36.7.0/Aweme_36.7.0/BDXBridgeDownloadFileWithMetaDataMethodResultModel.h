@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeDownloadFileWithMetaDataMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *clientCode;
@property (retain, nonatomic) NSNumber *httpCode;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSDictionary *response;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
