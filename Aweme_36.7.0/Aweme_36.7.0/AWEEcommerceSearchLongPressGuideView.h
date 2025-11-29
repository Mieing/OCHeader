@class LOTAnimationView, UILabel;

@interface AWEEcommerceSearchLongPressGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *longPressGuideLOTView;
@property (retain, nonatomic) UILabel *longPressGuideLabel;

+ (id)UIDHasShownLongPressGuideKey;

- (void)stopLongPressGuideLottie;
- (void)playLongPressGuideLottie;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
