@class NSString, NSDictionary;

@interface BDXBridgeUploadImageMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSDictionary *response;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
