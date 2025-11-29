@class MMUIButton, MMUIImageView, MMUILabel;
@protocol BrandProfileNaviLiveBarDelegate;

@interface BrandProfileNaviLiveBar : MMUIView

@property (retain, nonatomic) MMUIImageView *finderIcon;
@property (retain, nonatomic) MMUILabel *finderLabel;
@property (retain, nonatomic) MMUIImageView *finderArrow;
@property (retain, nonatomic) MMUIButton *clickButtonMask;
@property (weak, nonatomic) id<BrandProfileNaviLiveBarDelegate> delegate;

- (id)init;
- (void)initSelf;
- (void)configureLayout;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)onButtonClicked;
- (void)onButtonTouchDown:(id)a0;
- (void)onButtonTouchUp:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
