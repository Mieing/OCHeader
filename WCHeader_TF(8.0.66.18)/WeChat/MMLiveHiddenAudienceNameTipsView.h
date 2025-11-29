@class MMUIButton, MMUILabel, UIView;

@interface MMLiveHiddenAudienceNameTipsView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUIButton *okButton;
@property (copy, nonatomic) id /* block */ clickAction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void).cxx_destruct;

@end
