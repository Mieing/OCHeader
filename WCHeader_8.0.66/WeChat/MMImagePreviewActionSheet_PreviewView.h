@class MMLoadingView, MMImagePreviewActionSheet_ImageView, MMImagePreviewInfo, ImageBrowseButton;
@protocol MMImagePreviewActionSheet_PreviewViewDelegate;

@interface MMImagePreviewActionSheet_PreviewView : UIView

@property (retain, nonatomic) MMImagePreviewActionSheet_ImageView *imageScrollView;
@property (retain, nonatomic) ImageBrowseButton *operateButton;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (retain, nonatomic) MMImagePreviewInfo *info;
@property (weak, nonatomic) id<MMImagePreviewActionSheet_PreviewViewDelegate> delegate;
@property (readonly, nonatomic) BOOL isDisplayOriginImage;

- (id)initWithImagePreviewInfo:(id)a0;
- (void)showInView:(id)a0;
- (id)currentImage;
- (void)updateImage:(id)a0;
- (void)layoutSubviews;
- (BOOL)isLandScape;
- (void)layoutUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageDisplayFrame;
- (void)updateButtonTitle:(id)a0;
- (void)updateImage:(id)a0 isOrigin:(BOOL)a1;
- (void)onClickOperateButton;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;

@end
