@class UIImageView, UILabel, UIView;

@interface WCFinderProfileCardCommonView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *outIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *summaryLabel;
@property (retain, nonatomic) UIImageView *tailIconView;
@property (copy, nonatomic) id /* block */ onClick;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)update:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onTap;
- (void).cxx_destruct;

@end
