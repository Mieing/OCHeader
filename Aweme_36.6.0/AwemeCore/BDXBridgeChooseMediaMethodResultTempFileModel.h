@class NSNumber, NSString, NSArray;

@interface BDXBridgeChooseMediaMethodResultTempFileModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *size;
@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *base64Data;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSArray *binaryData;
@property (copy, nonatomic) NSString *tempFilePath;
@property (copy, nonatomic) NSString *url;

+ (id)mediaTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
