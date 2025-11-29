@class NSNumber, NSString;

@interface BDXBridgeCreatePOIMediaMaterials : BDXBridgeModel

@property (retain, nonatomic) NSNumber *mediaType;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *imageBase64;
@property (copy, nonatomic) NSString *vid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
