@class VEEditorSession, NLEMediaWrapper;

@interface NLECaptureOutput : NSObject

@property (retain, nonatomic) VEEditorSession *editor;
@property (retain, nonatomic) NLEMediaWrapper *nleMediaWrapper;
@property (nonatomic) int NLEChainSelection;

- (id)capturePreviewUIImage;
- (id)initWithNLEMediaWrapper:(id)a0;
- (id)initWithEditor:(id)a0;
- (void)getProcessedPreviewImageAtTime:(double)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 isLastImage:(BOOL)a2 compeletion:(id /* block */)a3;
- (void)getSourcePreviewImageAtTime:(double)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 isLastImage:(BOOL)a2 compeletion:(id /* block */)a3;
- (id)initWithNLEMedia:(id)a0;
- (void)getPreviewImages:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 withEffect:(BOOL)a2 frameBlock:(id /* block */)a3 withHighlightScore:(BOOL)a4 usePublic:(BOOL)a5;
- (void)getPreviewImages:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 withEffect:(BOOL)a2 frameBlock:(id /* block */)a3 withHighlightScore:(BOOL)a4 isRough:(BOOL)a5 usePublic:(BOOL)a6;
- (id)capturePreviewUIImageWithPreferredSize:(struct CGSize { double x0; double x1; })a0;
- (void)getPreviewImages:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 withEffect:(BOOL)a2 frameBlock:(id /* block */)a3;
- (id)getCapturePreviewPixelColor:(struct CGPoint { double x0; double x1; })a0;
- (void)processImageWithCompleteBlock:(id /* block */)a0;
- (void)resetCaptureTasks;
- (void).cxx_destruct;

@end
