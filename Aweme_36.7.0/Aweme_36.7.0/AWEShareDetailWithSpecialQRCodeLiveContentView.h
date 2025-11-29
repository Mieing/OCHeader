@class UIView;

@interface AWEShareDetailWithSpecialQRCodeLiveContentView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) UIView *authorContainerView;

- (struct CGSize { double x0; double x1; })saveImageSize;
- (void)syncContentFrom:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
