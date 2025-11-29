@class IESECFullLoadingView, UIImageView, UIView, UILabel, UIButton;

@interface IESECLiveStateView : UIView

@property (retain, nonatomic) UIView *wrapper;
@property (retain, nonatomic) IESECFullLoadingView *loadingView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subtitle;
@property (retain, nonatomic) UIButton *actionButton;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL customLayout;
@property (nonatomic) BOOL smallLoadingStyle;

- (void)dismissLoading;
- (void)actionButtonFired:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutConstraints;
- (void)showLoading;

@end
