@class UILabel, UIImageView;

@interface CJPayResultDetailItemView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *unfoldArrow;
@property (nonatomic) BOOL needScaleFont;

- (void)updateWithTitle:(id)a0 detail:(id)a1;
- (void)updateFoldViewWithTitle:(id)a0 detail:(id)a1;
- (void)updateWithTitle:(id)a0 detail:(id)a1 iconUrl:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
