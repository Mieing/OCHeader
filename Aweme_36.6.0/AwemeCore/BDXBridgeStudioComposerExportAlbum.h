@class BDXBridgeStudioComposerExportEditMode, NSString, BDXBridgeStudioComposerExportSelectControl, NSNumber;

@interface BDXBridgeStudioComposerExportAlbum : BDXBridgeModel

@property (retain, nonatomic) NSNumber *selectState;
@property (retain, nonatomic) NSNumber *supportLivePhoto;
@property (copy, nonatomic) NSString *bottomNextTitle;
@property (retain, nonatomic) BDXBridgeStudioComposerExportEditMode *editMode;
@property (retain, nonatomic) BDXBridgeStudioComposerExportSelectControl *selectControl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
