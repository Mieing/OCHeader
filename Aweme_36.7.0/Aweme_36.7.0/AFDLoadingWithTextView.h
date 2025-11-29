@class DUXLoadingCircleView, NSString, UILabel, UIView;

@interface AFDLoadingWithTextView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXLoadingCircleView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *loadingTitleLabel;
@property (copy, nonatomic) NSString *normalText;
@property (copy, nonatomic) NSString *loadingText;
@property (nonatomic) BOOL enable;

- (void)p_setUI;
- (id)initWithTitle:(id)a0 loadingTitle:(id)a1;
- (void)configTitleFont:(id)a0 titleColor:(id)a1;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;

@end
