@class UIImageView, MMLoadingView;

@interface WebSearchPlugin_AISearch : WebSearchPluginBase

@property (retain, nonatomic) UIImageView *snapshotImgView;
@property (retain, nonatomic) MMLoadingView *snapshotLoadingView;

- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)takeSnapshotInRenderMode:(id)a0 callback:(id /* block */)a1 cropTopHeight:(double)a2 padding:(double)a3 exifUserComment:(id)a4;
- (void)addSnapshotAndLoadingOnWindowByTimeout:(double)a0;
- (void)addSnapshotAndLoadingOnWindowWithImage:(id)a0 timeout:(double)a1;
- (void)addSnapshotImageOnWindow:(id)a0 timeout:(double)a1;
- (void)removeSnapshotImageOnWindow;
- (void)removeSnapshotOnWindowAndStopLoading;
- (id)addImageWithTopWhitePadding:(id)a0 padding:(double)a1;
- (void).cxx_destruct;

@end
