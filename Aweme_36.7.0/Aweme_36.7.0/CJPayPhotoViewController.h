@class UIImageView, UIButton, UIImage;
@protocol CJPayPhotoViewControllerDelegate;

@interface CJPayPhotoViewController : CJPayFullPageBaseViewController

@property (retain, nonatomic) UIImageView *photoImageView;
@property (retain, nonatomic) UIButton *retryCaptureButton;
@property (retain, nonatomic) UIButton *usePhotoButton;
@property (retain, nonatomic) UIImage *photo;
@property (weak, nonatomic) id<CJPayPhotoViewControllerDelegate> delegate;

- (void)retryCaptureButtonOnClick:(id)a0;
- (void)usePhotoButtonOnClick:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
