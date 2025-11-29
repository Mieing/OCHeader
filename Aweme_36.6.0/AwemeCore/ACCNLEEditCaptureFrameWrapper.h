@class NSString, NLEInterface_OC;

@interface ACCNLEEditCaptureFrameWrapper : NSObject <ACCEditBuildListener, ACCEditCaptureFrameProtocol>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (id)capturePreviewUIImage;
- (void)getProcessedPreviewImageAtTime:(double)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 compeletion:(id /* block */)a2;
- (void)processImageWithCompleteBlock:(id /* block */)a0;
- (void)getSourcePreviewImageAtTime:(double)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 compeletion:(id /* block */)a2;
- (void)getProcessedPreviewImageAtIndex:(long long)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 compeletion:(id /* block */)a2;
- (void)getSourcePreviewImageAtIndex:(long long)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 compeletion:(id /* block */)a2;
- (void)beginImageAlbumPreviewTaskExportItemRetainAndReuse;
- (void)endImageAlbumPreviewTaskExportItemRetainAndReuse;
- (void)getProcessedPreviewImageAtTime:(double)a0 seekToTime:(BOOL)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 compeletion:(id /* block */)a3;
- (void)getSourcePreviewImageAtTime:(double)a0 seekToTime:(BOOL)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 compeletion:(id /* block */)a3;
- (BOOL)isNLEInited;
- (void)getPreviewImages:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 withEffect:(BOOL)a2 compeletion:(id /* block */)a3;
- (void).cxx_destruct;

@end
