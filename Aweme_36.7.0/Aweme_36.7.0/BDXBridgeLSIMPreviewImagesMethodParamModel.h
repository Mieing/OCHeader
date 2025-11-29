@class NSNumber, NSArray;

@interface BDXBridgeLSIMPreviewImagesMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSArray *imageURLs;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
