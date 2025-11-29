@class DVETiptoolSlider, NSMutableArray, NSString, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface DVEAudioSpeedSliderView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *scaleContainerView;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecongnizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panRecongnizer;
@property (nonatomic) double currentValue;
@property (retain, nonatomic) DVETiptoolSlider *tiptoolSlider;
@property (retain, nonatomic) NSMutableArray *scaleViews;
@property (retain, nonatomic) NSMutableArray *scaleLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)titledScaleView;
- (id)titledLabelWithText:(id)a0;
- (id)normalScaleView;
- (void)sliderValueChangedByGesture:(id)a0;
- (void)sliderValueChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
