@class BDXBridgeStudioComposerExportEdit, BDXBridgeStudioComposerExportAlbum, BDXBridgeStudioComposerExportBasic;

@interface BDXBridgeStudioComposerExportMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeStudioComposerExportBasic *basic;
@property (retain, nonatomic) BDXBridgeStudioComposerExportEdit *edit;
@property (retain, nonatomic) BDXBridgeStudioComposerExportAlbum *album;

+ (id)requiredKeyPaths;
+ (id)albumJSONTransformer;
+ (id)basicJSONTransformer;
+ (id)editJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
