@class UILabel, MMWebImageView;

@interface WCFinderNetIconTextBtn : UIView

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double leftRightMargin;
@property (copy, nonatomic) id /* block */ tapBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)changeToShadowMode:(BOOL)a0;
- (void)updateTitleTextColor:(id)a0;
- (void)updateLeftRightMargin:(double)a0;
- (void)onClickAction;
- (void)updateWithIconURL:(id)a0 title:(id)a1;
- (void)updateWithIconLightURL:(id)a0 iconDarkUrl:(id)a1 title:(id)a2;
- (void)layoutAllSubviews;
- (id)getTitleContent;
- (void).cxx_destruct;

@end
