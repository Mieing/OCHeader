@class NSNumber, NSDictionary, NSArray;

@interface BDXBridgeChooseAndUploadMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *clientCode;
@property (retain, nonatomic) NSNumber *httpCode;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSDictionary *response;
@property (retain, nonatomic) NSArray *tempFiles;

+ (id)tempFilesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
