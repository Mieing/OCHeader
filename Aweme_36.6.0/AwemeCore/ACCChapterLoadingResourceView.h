@class DUXLoadingCircleView, UILabel, UIView, UIButton;

@interface ACCChapterLoadingResourceView : UIView

@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) DUXLoadingCircleView *loadingToastView;
@property (retain, nonatomic) UIButton *loadingCancelButton;
@property (retain, nonatomic) UIView *errorView;
@property (retain, nonatomic) UILabel *errorTitleLabel;
@property (retain, nonatomic) UILabel *errorCaptionLabel;
@property (retain, nonatomic) UIButton *errorRetryButton;
@property (retain, nonatomic) UIButton *errorCancelButton;
@property (nonatomic) double progress;
@property (nonatomic) long long status;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ retryBlock;

- (void)p_setupLoadingUI;
- (void)didClickCloseButton:(id)a0;
- (void)p_setupErrorUI;
- (id)p_createButtonWithTitle:(id)a0;
- (void)retryButtonAction:(id)a0;
- (void).cxx_destruct;
- (void)resetProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
