@class MMMusicMVEditorCardThickSlider, UILabel;
@protocol MMMusicMVEditorCardSliderDelegate;

@interface MMMusicMVEditorCardSlider : UIView

@property (retain, nonatomic) MMMusicMVEditorCardThickSlider *slider;
@property (retain, nonatomic) UILabel *curTimeLabel;
@property (retain, nonatomic) UILabel *endTimeLabel;
@property (nonatomic) BOOL isSliding;
@property (weak, nonatomic) id<MMMusicMVEditorCardSliderDelegate> delegate;
@property (nonatomic) float startTime;
@property (nonatomic) float endTime;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)handleSliderValueChanged:(id)a0 forEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)trySetSliderValue:(float)a0;
- (void)setLabelHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
