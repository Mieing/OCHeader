@class NSString, UIImageView, UIImage, UIView, ImageScrollView;
@protocol WCPayGPPhotoViewControllerDelegate;

@interface WCPayGPPhotoViewController : WCDragToCloseViewController <ImageScrollViewDelegate, WCActionSheetDelegate>

@property (weak, nonatomic) id<WCPayGPPhotoViewControllerDelegate> delegate;
@property (retain, nonatomic) UIImage *originImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRect;
@property (retain, nonatomic) ImageScrollView *imageView;
@property (retain, nonatomic) UIImageView *animateImageView;
@property (retain, nonatomic) UIView *maskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 image:(id)a1 originRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)useTransparentNavibar;
- (BOOL)hidesStatusBar;
- (void)viewWillBePresented:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupView;
- (void)animateShowImage;
- (void)dismissPhotoView;
- (void)dismissPhotoViewWithAnimation;
- (void)onSingleTap:(id)a0;
- (void)onFullScreenItemChangeAlpha:(double)a0;
- (void)OnLongPress:(id)a0;
- (void)onFullScreenItemDragToClose;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
