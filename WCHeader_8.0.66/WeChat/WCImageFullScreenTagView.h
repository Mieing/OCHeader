@class WCLivePhotoButton, WCImageFullScreenTagViewModel, MMUIButton, ImageBrowseButton;
@protocol WCImageFullScreenTagViewDelegate;

@interface WCImageFullScreenTagView : UIView

@property (retain, nonatomic) WCLivePhotoButton *livePhotoButton;
@property (retain, nonatomic) ImageBrowseButton *imageSearchButton;
@property (retain, nonatomic) MMUIButton *yuanBaoFollowButton;
@property (nonatomic) double viewWidth;
@property (nonatomic) struct CGSize { double width; double height; } livePhotoBtnSize;
@property (readonly, nonatomic) WCImageFullScreenTagViewModel *viewModel;
@property (weak, nonatomic) id<WCImageFullScreenTagViewDelegate> delegate;
@property (nonatomic) BOOL autoAdjustsTags;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tagSafeArea;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tagPadding;
@property (readonly, nonatomic) double safeAreaInsetBottom;

- (id)initWithViewModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)_calculateHeight;
- (void)loadLivePhotoButton;
- (void)livePhotoButtonClicked:(id)a0;
- (void)loadYuanBaoTemplateFollowButton;
- (void)yuanBaoTemplateFollowButtonClicked:(id)a0;
- (void)loadImageSearchButton;
- (void)imageSearchButtonClicked:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
