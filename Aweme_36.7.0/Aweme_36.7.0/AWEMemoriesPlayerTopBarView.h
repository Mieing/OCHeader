@class NSObject, ACCGradientView, UILabel, UIButton;
@protocol AWEMemoriesPlayerTopBarViewDelegate;

@interface AWEMemoriesPlayerTopBarView : UIView

@property (retain, nonatomic) ACCGradientView *topBarGradientView;
@property (retain, nonatomic) UIButton *topBarCloseButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (weak, nonatomic) NSObject<AWEMemoriesPlayerTopBarViewDelegate> *delegate;

- (void)closeButtonClicked:(id)a0;
- (void)loadConfigWithPlayerConfigManager:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
