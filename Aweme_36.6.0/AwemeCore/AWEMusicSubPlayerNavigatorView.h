@class UIButton, UILabel, NSString;

@interface AWEMusicSubPlayerNavigatorView : UIView

@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *rightBtn;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ backTappedBlock;
@property (copy, nonatomic) id /* block */ rightTappedBlock;
@property (retain, nonatomic) NSString *rightTitle;

- (void)rightBtnTapped:(id)a0;
- (id)generateTitleLabel;
- (void)backBtnTapped:(id)a0;
- (void)backBtnTapped_IMP:(id)a0;
- (void)rightBtnTapped_IMP:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
