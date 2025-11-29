@class NSArray, UIImageView, UIView;
@protocol MMStepSliderDelegate;

@interface MMStepSlider : UIControl {
    BOOL _sliderOn;
    UIImageView *_sliderImageView;
    UIView *_trackViewNormal;
}

@property (nonatomic) unsigned int value;
@property (weak, nonatomic) id<MMStepSliderDelegate> m_delegate;
@property (readonly, nonatomic) unsigned int stepCount;
@property (readonly, nonatomic) NSArray *scaleTextArray;
@property (readonly, nonatomic) NSArray *scaleTextSizeArray;

- (id)initWithWidth:(double)a0 TextArray:(id)a1 TextSizeArray:(id)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)layoutSubviews;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)genScaleLabel:(id)a0 size:(double)a1;
- (float)xForValue:(unsigned int)a0;
- (void)touchTrackNormalView:(long long)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (void).cxx_destruct;

@end
