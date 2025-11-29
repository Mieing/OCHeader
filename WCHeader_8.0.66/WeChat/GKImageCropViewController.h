@class UIToolbar, UIImage, GKImageCropView, UIButton;
@protocol GKImageCropControllerDelegate;

@interface GKImageCropViewController : UIViewController {
    UIImage *_croppedImage;
}

@property (retain, nonatomic) GKImageCropView *imageCropView;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *useButton;
@property (retain, nonatomic) UIImage *sourceImage;
@property (nonatomic) struct CGSize { double width; double height; } cropSize;
@property (nonatomic) BOOL resizeableCropArea;
@property (weak, nonatomic) id<GKImageCropControllerDelegate> delegate;

- (void)_actionCancel;
- (void)_actionUse;
- (void)_setupNavigationBar;
- (void)_setupCropView;
- (void)_setupCancelButton;
- (void)_setupUseButton;
- (id)_toolbarBackgroundImage;
- (void)_setupToolbar;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;

@end
