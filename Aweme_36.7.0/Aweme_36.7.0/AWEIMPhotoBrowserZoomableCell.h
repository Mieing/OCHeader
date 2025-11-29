@class AWEIMPhotoBrowserZoomableModel, AWEIMPhotoBrowserZoomableView, NSString, AWEUILoadingView;
@protocol AWEIMPhotoBrowserZoomableCellDelegate;

@interface AWEIMPhotoBrowserZoomableCell : UICollectionViewCell <AWEIMPhotoBrowserZoomableViewDelegate>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEIMPhotoBrowserZoomableView *scrollView;
@property (retain, nonatomic) AWEIMPhotoBrowserZoomableModel *model;
@property (weak, nonatomic) id<AWEIMPhotoBrowserZoomableCellDelegate> zoomableDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)didTapZoomableView:(id)a0;
- (void)didBeginZoomZoomableView:(id)a0;
- (void)didEndZoomZoomableView:(id)a0;
- (void)didEndDecelerating:(id)a0;
- (void)configWithModel:(id)a0;
- (void)p_updateUIWithModel:(id)a0;
- (void)p_showLoadingView;
- (void)resetZoomableStatusIfNeededWithAnimated:(BOOL)a0;
- (void)p_hideLoadingView;
- (void)p_setupBind;
- (void)p_updateImage;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
