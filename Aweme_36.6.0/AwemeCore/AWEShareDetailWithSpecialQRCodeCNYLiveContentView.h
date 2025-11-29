@class UIImageView, UIView;

@interface AWEShareDetailWithSpecialQRCodeCNYLiveContentView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) UIView *authorContainerView;
@property (retain, nonatomic) UIView *textContainerView;

- (void)syncContentFrom:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (void)setUseNewVersion;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setUpSubviews;

@end
