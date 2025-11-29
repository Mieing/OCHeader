@class AWEImagesView, UIView;
@protocol AWEVideoCoverImageSliderViewDelegate;

@interface AWEVideoCoverImageSliderView : UIView

@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) UIView *controlView;
@property (nonatomic) double positionPercent;
@property (weak, nonatomic) id<AWEVideoCoverImageSliderViewDelegate> delegate;
@property (retain, nonatomic) UIView *controlContentView;
@property (retain, nonatomic) AWEImagesView *coverImagesView;

- (void)setControlViewCenterXWithCode:(double)a0 defaultWidth:(double)a1;
- (void)moveControlView:(id)a0 type:(unsigned long long)a1;
- (double)xValueWithPercent:(double)a0 defaultWidth:(double)a1;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
