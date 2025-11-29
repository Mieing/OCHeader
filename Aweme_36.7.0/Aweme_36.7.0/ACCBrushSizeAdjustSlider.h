@class NSString, UILabel, UISlider, UIView;
@protocol DVECommonLargeSliderDelegate;

@interface ACCBrushSizeAdjustSlider : UIControl <ACCBrushSizeSliderProtocol>

@property (retain, nonatomic) UILabel *smallLabel;
@property (retain, nonatomic) UILabel *largeLabel;
@property (retain, nonatomic) UISlider *slider;
@property (nonatomic) float maximunValue;
@property (nonatomic) float minimumValue;
@property (nonatomic) float value;
@property (weak, nonatomic) id<DVECommonLargeSliderDelegate> delegate;
@property (weak, nonatomic) UIView *sliderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sliderValueDidChanged:(id)a0;
- (void)sliderDragDidEnd:(id)a0;
- (void)sliderDragDidBegin:(id)a0;
- (void)reloadSliderWith:(struct { double x0; double x1; double x2; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
