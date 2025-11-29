@class ACCAnimatedButton, UILabel, UIView;

@interface AWEPhotoAssetsBottomPanel : UIView

@property (retain, nonatomic) UIView *toolbarBgView;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (retain, nonatomic) ACCAnimatedButton *okButton;
@property (retain, nonatomic) UILabel *bottomInfoLabel;
@property (copy, nonatomic) id /* block */ okCallback;
@property (copy, nonatomic) id /* block */ closeCallback;

- (void)onCloseAction:(id)a0;
- (void)onOkAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
