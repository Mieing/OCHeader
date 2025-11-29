@class NSString, UILabel, UIButton;

@interface WCCommentListTipsView : UIView

@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *clickButton;
@property (copy, nonatomic) id /* block */ clickBlock;

+ (double)heightForTips:(id)a0 width:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1;
- (void)initView;
- (void)initBackgroundView;
- (void)initTipsLabel;
- (void)initClickButton;
- (id)createMaskShapeLayer;
- (void)layoutSubviews;
- (void)onClickButton;
- (void).cxx_destruct;

@end
