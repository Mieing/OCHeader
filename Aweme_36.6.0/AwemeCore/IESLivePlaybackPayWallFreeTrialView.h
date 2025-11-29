@class UILabel, UIButton;

@interface IESLivePlaybackPayWallFreeTrialView : UIView

@property (retain, nonatomic) UILabel *titleLbl;
@property (retain, nonatomic) UILabel *subTitleLbl;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL enableAction;
@property (copy, nonatomic) id /* block */ canHitTestEvent;
@property (nonatomic) double topMargin;
@property (retain, nonatomic) UIButton *actionBtn;

+ (id)trialView;
+ (double)contentHeight;

- (void)actionDidFire:(id)a0;
- (void)refreshWithTitle:(id)a0 subTitle:(id)a1 actionTitle:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
