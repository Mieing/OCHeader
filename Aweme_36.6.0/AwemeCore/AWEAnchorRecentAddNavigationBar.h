@class UIButton, UILabel;

@interface AWEAnchorRecentAddNavigationBar : UIView

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (copy, nonatomic) id /* block */ leftTappedBlock;
@property (copy, nonatomic) id /* block */ rightTappedBlock;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)leftBtnTapped:(id)a0;
- (void)rightBtnTapped:(id)a0;
- (void)updateEditMode:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
