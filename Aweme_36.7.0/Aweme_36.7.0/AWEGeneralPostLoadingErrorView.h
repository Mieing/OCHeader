@class UILabel, ACCAnimatedButton;

@interface AWEGeneralPostLoadingErrorView : UIView

@property (retain, nonatomic) UILabel *failLabel;
@property (retain, nonatomic) UILabel *failTipLabel;
@property (retain, nonatomic) ACCAnimatedButton *retryButton;
@property (copy, nonatomic) id /* block */ retryBlock;

- (void)retryButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
