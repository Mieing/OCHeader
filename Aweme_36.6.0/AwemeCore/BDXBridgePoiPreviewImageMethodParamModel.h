@class NSString, NSNumber, NSDictionary;

@interface BDXBridgePoiPreviewImageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *imageID;
@property (retain, nonatomic) NSNumber *imageIndex;
@property (retain, nonatomic) NSNumber *isUseImageEdit;
@property (nonatomic) BOOL needMusic;
@property (retain, nonatomic) NSNumber *useOpenCreation;
@property (copy, nonatomic) NSDictionary *logParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
