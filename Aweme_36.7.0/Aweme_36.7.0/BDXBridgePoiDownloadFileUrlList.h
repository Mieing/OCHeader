@class NSString;

@interface BDXBridgePoiDownloadFileUrlList : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *uri;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
