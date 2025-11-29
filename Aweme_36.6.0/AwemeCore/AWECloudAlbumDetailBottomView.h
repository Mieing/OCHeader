@class AWECloudAlbumDetailBottomUploadView, AWECloudAlbumDetailBottomSelectView;

@interface AWECloudAlbumDetailBottomView : UIView

@property (readonly, nonatomic) double contentHeight;
@property (readonly, nonatomic) AWECloudAlbumDetailBottomSelectView *selectView;
@property (readonly, nonatomic) AWECloudAlbumDetailBottomUploadView *uploadView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentHeight:(double)a1;
- (void).cxx_destruct;
- (void)updateStatus:(id)a0;
- (void)setup;
- (void)updateProgress:(id)a0;

@end
