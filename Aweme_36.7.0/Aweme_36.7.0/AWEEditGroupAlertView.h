@class UIButton;

@interface AWEEditGroupAlertView : AWETextEditAlertView

@property (retain, nonatomic) UIButton *clearButton;
@property (nonatomic) BOOL isAnimating;

- (void)showOnView:(id)a0;
- (void)clickConfirmBtn;
- (void)editGroupWithOldName:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)textFieldDidChange:(id)a0;

@end
