@class UIImageView, AWEIMFansGroupManagementPlateInfoViewModel, UILabel, UIView, UIButton;

@interface AWEIMFansGroupCardStyleHeaderCollectionReusableView : UICollectionReusableView

@property (retain, nonatomic) AWEIMFansGroupManagementPlateInfoViewModel *viewModel;
@property (retain, nonatomic) UIView *headerBaseView;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) UIButton *headerActionBtn;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UIView *headerDotView;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)identifierWithType:(long long)a0;

- (void)__setupUI;
- (void)__btnClicked;
- (void)__updateLayout;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
