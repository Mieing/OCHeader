@interface IESLiveMessageListGiftMaskView : UIView

@property (copy, nonatomic) id /* block */ hideTask;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isAnimating;

- (void)showWithAnimation;
- (void)dismissWithAnimation;
- (void)notifyAddedNewNode;
- (void)setupBottomGradient;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setupUI;

@end
