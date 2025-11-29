@class UILabel, UIView;

@interface CJPayUnifyCVVInputContainerView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *cursorView;
@property (nonatomic) long long maxCharCount;

- (id)blinking;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTextContent:(id)a0;
- (void)showCursor;

@end
