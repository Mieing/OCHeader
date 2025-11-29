@class UIButton, LOTAnimationView, UIView;

@interface IESLiveStreamPictureRecognizingView : UIView

@property (retain, nonatomic) UIView *blackMaskBgView;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) LOTAnimationView *recognizingView;
@property (copy, nonatomic) id /* block */ cancelRecognition;

- (void)playRecognitionAnimation;
- (void)tapCancelBtn;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
