@class UIColor, CJPayLabel;

@interface CJPayMethodCellTagView : UIView

@property (retain, nonatomic) CJPayLabel *titleLabel;
@property (nonatomic) long long viewType;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *tagViewBGColor;

- (void)p_refreshViewWithType:(long long)a0;
- (void)changeTagType:(long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)minWidth;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateTitle:(id)a0;

@end
