@class UILabel;

@interface AWEIMGroupNoticeEditTemplateView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *copyLabel;
@property (retain, nonatomic) UILabel *templateLabel;

- (void)updateTitle:(id)a0 copyLabel:(id)a1 templateLabel:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
