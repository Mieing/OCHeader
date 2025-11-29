@class UIImageView, UILabel;

@interface AWEECOMIMChatListTipsView : UIView

@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (copy, nonatomic) id /* block */ viewClickBlock;

- (void)updateViewWithTipsStr:(id)a0;
- (double)currentWidthWithTipsStr:(id)a0;
- (void)viewTouchInside;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
