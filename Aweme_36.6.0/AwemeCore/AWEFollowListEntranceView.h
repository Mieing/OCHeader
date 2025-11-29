@class UIImageView, AWEFollowListUserContentModel, UILabel, UIView;

@interface AWEFollowListEntranceView : UIControl

@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *entranceLabel;
@property (retain, nonatomic) UIImageView *imgView;
@property (retain, nonatomic) AWEFollowListUserContentModel *userModel;
@property (copy, nonatomic) id /* block */ onTapEntranceAction;
@property (copy, nonatomic) id /* block */ onTapDescLabelAction;
@property (retain, nonatomic) UILabel *descLabel;

- (unsigned long long)awe_priorityForAccessibilityRotor;
- (id)awe_customActionForAccessibilityRotor;
- (void)onClicked;
- (void)onDescLabelClicked;
- (void)configWithContentModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
