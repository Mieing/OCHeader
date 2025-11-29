@class UIImageView, UILabel, UIButton;

@interface ACCSelfieEmojiAuthorityView : UIView

@property (retain, nonatomic) UIImageView *faceCircleImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *openCameraAuthBtn;

- (void)generateOpenCameraAuthBtnOptimized;
- (void)goToOpenCameraAuth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
