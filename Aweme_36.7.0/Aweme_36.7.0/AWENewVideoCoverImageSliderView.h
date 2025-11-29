@class UIImageView, AWENewVideoCoverImageSliderPreviewView, UIView, AWEImagesView;
@protocol AWENewVideoCoverImageSliderViewDelegate;

@interface AWENewVideoCoverImageSliderView : UIView

@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) AWENewVideoCoverImageSliderPreviewView *controlView;
@property (nonatomic) double positionPercent;
@property (retain, nonatomic) UIImageView *recommendHintImageView;
@property (retain, nonatomic) UIView *pointView;
@property (nonatomic) double newLivePhotoImagePartBeginPercent;
@property (nonatomic) BOOL isForceLocateNewLivePhotoImage;
@property (weak, nonatomic) id<AWENewVideoCoverImageSliderViewDelegate> delegate;
@property (retain, nonatomic) UIView *controlContentView;
@property (retain, nonatomic) AWEImagesView *coverImagesView;

- (void)setRecommendHintImageViewPercent:(double)a0 defaultWidth:(double)a1;
- (void)setControlViewCenterXWithCode:(double)a0 defaultWidth:(double)a1;
- (void)setRecommendHintImageViewHighlight:(BOOL)a0;
- (void)moveToHandlePoint:(struct CGPoint { double x0; double x1; })a0 type:(unsigned long long)a1;
- (void)moveControlView:(id)a0 type:(unsigned long long)a1;
- (double)xValueWithPercent:(double)a0 defaultWidth:(double)a1;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityIncrement;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
