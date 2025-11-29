@class NSArray, UIView;

@interface WCFinderJumpInfoLBSCardScoreView : UIView

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) NSArray *scoreIcons;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateScore:(double)a0;
- (void).cxx_destruct;

@end
