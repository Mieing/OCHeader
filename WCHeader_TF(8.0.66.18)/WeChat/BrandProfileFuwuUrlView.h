@class UIImageView, UIView, MMUIButton, BrandProfileFuwuInfo;

@interface BrandProfileFuwuUrlView : BrandProfileFuwuBaseView

@property (retain, nonatomic) BrandProfileFuwuInfo *fuwuInfo;
@property (retain, nonatomic) UIView *topDividingView;
@property (retain, nonatomic) MMUIButton *button;
@property (nonatomic) double cachedFuwuViewHeight;
@property (retain, nonatomic) UIImageView *iconView;

- (id)init;
- (void)setupSubviews;
- (void)layoutSubviews;
- (double)calcuteFuwuViewHeight;
- (void)updateFuwuInfo:(id)a0;
- (void)onFuwuButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
