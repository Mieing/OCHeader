@class NSString, NSAttributedString, UIButton;

@interface IESGCPXPlayGameInteractionToastView : IESGCPXPlayGameToastView

@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSString *actionText;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ onClick;
@property (copy, nonatomic) id /* block */ onClose;

- (void)showOnView:(id)a0;
- (void)clickActionButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 actionText:(id)a2 duration:(double)a3 clickAction:(id /* block */)a4 closeAction:(id /* block */)a5;
- (void)close;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;

@end
