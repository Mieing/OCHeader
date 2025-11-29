@class UILabel, UITapGestureRecognizer, UIView;
@protocol IESLiveAnimatedViewProtocol;

@interface IESLiveAnchorVRGuideView : UIView

@property (retain, nonatomic) UIView<IESLiveAnimatedViewProtocol> *animationView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) BOOL willDismiss;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ dismissedBlock;

- (void)tapGestureAction:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)play;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
