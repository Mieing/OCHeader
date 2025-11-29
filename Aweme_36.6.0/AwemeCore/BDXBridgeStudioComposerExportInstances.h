@class BDXBridgeStudioComposerExportResource;

@interface BDXBridgeStudioComposerExportInstances : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeStudioComposerExportResource *resource;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
