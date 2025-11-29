@class NSArray, MMUIView, UIImpactFeedbackGenerator;
@protocol MJShootBubbleSwitchDelegate;

@interface MJShootBubbleSwitch : MMUIView

@property (copy, nonatomic) NSArray *items;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) MMUIView *containerView;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id<MJShootBubbleSwitchDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetViews;
- (void)setupWithItems:(id)a0;
- (void)switchToIndex:(long long)a0;
- (void)updateButtonStyle:(id)a0 selected:(BOOL)a1;
- (void)buttonDidTouchUpInside:(id)a0;
- (id)createSwitchButtonWithItem:(id)a0;
- (void).cxx_destruct;

@end
