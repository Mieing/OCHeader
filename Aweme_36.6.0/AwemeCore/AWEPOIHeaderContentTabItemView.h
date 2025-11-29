@class UILabel, CAGradientLayer, UIView;

@interface AWEPOIHeaderContentTabItemView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tabTitleLabel;
@property (retain, nonatomic) UILabel *numLabel;
@property (retain, nonatomic) CAGradientLayer *textGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bgGradientLayer;
@property (retain, nonatomic) UIView *tapView;
@property (nonatomic) long long itemNum;
@property (nonatomic) BOOL isHighlight;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) id /* block */ selectAction;

- (double)tagWidth;
- (void)onClickAction;
- (void)updateInnerIndex:(long long)a0;
- (void)parseGradient:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkPointInvalidWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
