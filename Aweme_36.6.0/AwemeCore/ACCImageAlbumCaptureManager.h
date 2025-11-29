@class NSOperationQueue, ACCImageAlbumEditor;

@interface ACCImageAlbumCaptureManager : NSOperation

@property (retain, nonatomic) ACCImageAlbumEditor *imageEditor;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL shouldAlwaysHoldImageEditor;

+ (id)sharedManager;

- (void)p_setup;
- (void)beginImageAlbumPreviewTaskExportItemRetainAndReuse;
- (void)endImageAlbumPreviewTaskExportItemRetainAndReuse;
- (void)releaseImageEditorIfEnable;
- (void)fetchPreviewImageAtIndex:(long long)a0 imageItem:(id)a1 containerSize:(struct CGSize { double x0; double x1; })a2 preferredSize:(struct CGSize { double x0; double x1; })a3 usingOriginalImage:(BOOL)a4 compeletion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;

@end
