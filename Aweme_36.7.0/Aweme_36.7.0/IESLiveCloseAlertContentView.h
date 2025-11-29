@class UILabel, IESLiveWebpLoadingView;

@interface IESLiveCloseAlertContentView : UIView

@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)updateAttributedText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)setupLayout;

@end
