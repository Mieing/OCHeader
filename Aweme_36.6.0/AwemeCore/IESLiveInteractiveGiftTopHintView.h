@class UIImageView, UILabel, UIView;

@interface IESLiveInteractiveGiftTopHintView : UIView

@property (retain, nonatomic) UIImageView *signalImageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *confirmContainer;
@property (retain, nonatomic) UILabel *confirmLabel;
@property (copy, nonatomic) id /* block */ clickAction;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleTap;
- (void)setUpView;

@end
