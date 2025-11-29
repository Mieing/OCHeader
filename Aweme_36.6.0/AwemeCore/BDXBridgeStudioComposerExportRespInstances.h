@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeStudioComposerExportRespInstances : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *fileType;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *coverBase64;
@property (copy, nonatomic) NSDictionary *exifInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
