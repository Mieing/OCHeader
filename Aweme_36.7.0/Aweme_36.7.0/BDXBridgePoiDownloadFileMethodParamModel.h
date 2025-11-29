@class NSArray;

@interface BDXBridgePoiDownloadFileMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *urlList;

+ (id)urlListJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
