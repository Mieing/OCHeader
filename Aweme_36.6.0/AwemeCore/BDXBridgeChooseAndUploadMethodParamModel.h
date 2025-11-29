@class NSString, NSDictionary, BDXBridgeChooseAndUploadImageParams, BDXBridgeChooseAndUploadVideoParams, NSNumber;

@interface BDXBridgeChooseAndUploadMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *maxCount;
@property (nonatomic) BOOL needBase64Data;
@property (nonatomic) BOOL saveToPhotoAlbum;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *header;
@property (nonatomic) BOOL needCommonParams;
@property (retain, nonatomic) BDXBridgeChooseAndUploadImageParams *imageParams;
@property (retain, nonatomic) BDXBridgeChooseAndUploadVideoParams *videoParams;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long cameraType;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic) BOOL shouldUploadRawFile;
@property (nonatomic) double timeoutInterval;

+ (id)requiredKeyPaths;
+ (id)mediaTypeJSONTransformer;
+ (id)sourceTypeJSONTransformer;
+ (id)cameraTypeJSONTransformer;
+ (id)imageParamsJSONTransformer;
+ (id)videoParamsJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
