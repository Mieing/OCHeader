@class UIImageView, UILabel;

@interface IESLiveInteractivePlaymodeItemView : IESLiveInteractEntranceBaseView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *bottomTitleLbl;
@property (retain, nonatomic) UIImageView *loopImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 DIContext:(id)a1;
- (void)endLoopSpinAnimation;
- (void)startLoopSpinAnimation;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (void)loadViews;

@end
