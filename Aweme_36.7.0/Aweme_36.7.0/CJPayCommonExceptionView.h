@class NSString, UILabel, UIButton;

@interface CJPayCommonExceptionView : UIView

@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *actionButton;

- (void)actionButtonClick;
- (BOOL)isDouHuoStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mainTitle:(id)a1 subTitle:(id)a2 buttonTitle:(id)a3;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
