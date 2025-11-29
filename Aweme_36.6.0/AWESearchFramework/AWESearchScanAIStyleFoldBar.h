@class UIImageView, UILabel;

@interface AWESearchScanAIStyleFoldBar : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)clickAction;
- (void)updateTitleLabelText:(id)a0;
- (void)setSubViewHidden:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
