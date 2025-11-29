@class UISlider, UILabel, MMTimer;
@protocol WCEditFilterHeaderViewDelegate;

@interface WCEditFilterHeaderView : MMUIView

@property (retain, nonatomic) UISlider *slider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *sliderValueLabel;
@property (retain, nonatomic) MMTimer *throttle;
@property (nonatomic) int lastSliderValue;
@property (weak, nonatomic) id<WCEditFilterHeaderViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)onsliderValueDidChange;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (id)getDotImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)changeSliderValue:(int)a0;
- (void)changeSliderValueProgress;
- (void)sendSliderValueDidChangeNotify;
- (void).cxx_destruct;

@end
