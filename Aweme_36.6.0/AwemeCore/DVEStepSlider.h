@class UIColor, UIFont, DVEBaseSlider, NSString, UILabel;

@interface DVEStepSlider : UIControl <DVESBaseSliderProtocol>

@property (nonatomic) unsigned long long valueType;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (nonatomic) long long type;
@property (nonatomic) float value;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double textOffset;
@property (retain, nonatomic) UIColor *minimumTrackTintColor;
@property (retain, nonatomic) UIColor *maximumTrackTintColor;
@property (copy, nonatomic) id /* block */ currentTextProvider;
@property (nonatomic) BOOL showTitleWhenSliding;
@property (nonatomic) float step;
@property (nonatomic) double sliderHeight;
@property (nonatomic) BOOL isShowingSliderValue;
@property (retain, nonatomic) UILabel *minTitleLabel;
@property (retain, nonatomic) UILabel *maxTitleLabel;
@property (retain, nonatomic) UIColor *minmaxLableTextColor;
@property (retain, nonatomic) UIFont *minmaxLableTextFont;
@property (nonatomic) double minmaxLableTextOffset;
@property (nonatomic) BOOL defaultMarkShow;
@property (retain, nonatomic) UIColor *defaultMarkColor;
@property (nonatomic) BOOL setupUI;
@property (nonatomic) long long decimal;
@property (retain, nonatomic) DVEBaseSlider *slider;
@property (nonatomic) struct DVEFloatRang { double location; double length; } valueRange;
@property (nonatomic) float horizontalInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)adjustLayout;
- (id)initWithStep:(float)a0 defaultValue:(float)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)touchesSliderBegan:(id)a0;
- (void)touchesSliderEnd:(id)a0;
- (void)touchesSliderValueChange:(id)a0;
- (void)initWithStep:(float)a0 value:(float)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)updateStepLabel;
- (void)updateThumbImage;
- (void)setValueRange:(struct DVEFloatRang { double x0; double x1; })a0 defaultProgress:(float)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
