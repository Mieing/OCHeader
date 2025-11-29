@class AWEEvaluationRatingView, UILabel, NSMutableArray, UIButton;

@interface AWEEvaluationScoreView : UIView

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *sameButton;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) AWEEvaluationRatingView *ratingView;

- (void)p_configRatingView;
- (void)p_configChooseButton;
- (id)createButtonWithTitle:(id)a0 size:(double)a1;
- (void)setupUIWithTaskMode:(long long)a0 measurement:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
