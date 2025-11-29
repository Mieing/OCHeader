@class NSString, NSNumber;

@interface BDXBridgeChooseAndUploadTempFiles : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *base64Data;
@property (nonatomic) long long mediaType;

+ (id)mediaTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
