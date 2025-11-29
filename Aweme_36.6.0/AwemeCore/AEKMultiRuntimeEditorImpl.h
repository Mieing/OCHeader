@class NSString, ACCRepositoryWorkspace;
@protocol AEKMegaEditor, AEKPreviewEditor, AEKCaptureFrameEditor, AEKRuntimeStickerEditor, AEKExportEditor;

@interface AEKMultiRuntimeEditorImpl : NSObject <AEKRuntimeEditor>

@property (weak, nonatomic) ACCRepositoryWorkspace *workspace;
@property (retain, nonatomic) id<AEKMegaEditor> currentEditor;
@property (retain, nonatomic) id<AEKPreviewEditor> preview;
@property (readonly, nonatomic) id<AEKCaptureFrameEditor> captureFrame;
@property (readonly, nonatomic) id<AEKExportEditor> export;
@property (readonly, nonatomic) id<AEKRuntimeStickerEditor> sticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWorkspace:(id)a0;

@end
