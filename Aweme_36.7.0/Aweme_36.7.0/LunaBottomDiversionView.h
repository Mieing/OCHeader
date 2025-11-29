@class UIStackView, NSArray, UIImageView, UIView, UILabel;

@interface LunaBottomDiversionView : UIView

@property (retain, nonatomic) UIView *contaienr;
@property (retain, nonatomic) UIImageView *logo;
@property (retain, nonatomic) UIStackView *actionStackView;
@property (retain, nonatomic) UIView *actionContent;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UILabel *activityLabel;
@property (retain, nonatomic) UIImageView *actionArrow;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) NSArray *actionDescription;
@property (copy, nonatomic) id /* block */ tappedBlock;

- (void)p_didClickBottomDiversionButton;
- (void)showActivityAttributeString:(id)a0 animation:(BOOL)a1;
- (void)hideActivityAttribute;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
