@class NSString;
@protocol AEKRuntimeStickerEditor, AEKPreviewEditor, AEKCaptureFrameEditor, AEKExportEditor;

@interface AEKRuntimeEditorImpl : AEKBaseRuntimeEditor <NLEEditorDelegate, NLEEditor_iOSListenerProtocol, NLEBranchDelegate, AEKRuntimeEditor>

@property (retain, nonatomic) id<AEKPreviewEditor> preview;
@property (retain, nonatomic) id<AEKExportEditor> export;
@property (retain, nonatomic) id<AEKCaptureFrameEditor> captureFrame;
@property (retain, nonatomic) id<AEKRuntimeStickerEditor> sticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDoneChanged:(unsigned long long)a0 msg:(id)a1;
- (void)branchDidChange;
- (void)nleModelChanged:(id)a0;
- (void)nleEditorDidChange:(id)a0;
- (void)nleEditorWillDone:(id)a0;
- (id)initWithData:(id)a0 subscriberProvider:(id)a1;
- (void).cxx_destruct;

@end
