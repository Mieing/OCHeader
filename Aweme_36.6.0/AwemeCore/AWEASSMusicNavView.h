@class UIButton, UILabel, UIView;

@interface AWEASSMusicNavView : UIView

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL shouldShowContentView;
@property (retain, nonatomic) UIView *barView;
@property (nonatomic) BOOL leftButtonIsBack;
@property (retain, nonatomic) UIButton *leftCancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL shouldShowBarView;
@property (nonatomic) BOOL darkTheme;

- (double)recommendHeight;
- (void)updateCancelButtonImage;
- (void)showContentView:(BOOL)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
