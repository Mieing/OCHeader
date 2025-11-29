@class NSString;

@interface AEKCaptureFrameEditorImpl : AEKBaseRuntimeEditor <AEKCaptureFrameEditor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)previewImageAtTime:(double)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)nle;
- (id)capturePreviewUIImage;

@end
