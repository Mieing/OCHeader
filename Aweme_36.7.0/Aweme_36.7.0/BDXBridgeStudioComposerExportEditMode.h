@class NSNumber;

@interface BDXBridgeStudioComposerExportEditMode : BDXBridgeModel

@property (retain, nonatomic) NSNumber *imageEditable;
@property (retain, nonatomic) NSNumber *videoEditable;
@property (retain, nonatomic) NSNumber *livePhotoEditable;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
