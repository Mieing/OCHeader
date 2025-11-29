@class MMLoadingIndicatorView, UIImageView, MMUIView, MMUILabel;

@interface WCPayFacingReceiveErrorTipsView : UIView

@property (retain, nonatomic) MMUIView *loadingView;
@property (retain, nonatomic) MMLoadingIndicatorView *loadingIcon;
@property (retain, nonatomic) MMUILabel *loadingLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *errorLabel;
@property (nonatomic) long long state;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTipsViewWithState:(long long)a0 hasMchCode:(BOOL)a1;
- (void)updateTipsViewWithState:(long long)a0 withErrorMsg:(id)a1 hasMchCode:(BOOL)a2;
- (void)setupContentView;
- (void).cxx_destruct;

@end
