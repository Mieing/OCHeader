@class DVEBaseLabel, NSString, DVETiptoolSlider;

@interface DVELabelSliderCombinationView : UIView <DVEBaseTooltipSliderDelegate>

@property (nonatomic) double margin;
@property (retain, nonatomic) DVETiptoolSlider *tiptoolSlider;
@property (retain, nonatomic) DVEBaseLabel *leftLabel;
@property (retain, nonatomic) DVEBaseLabel *rightLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLabel:(unsigned long long)a0 textWithFloatValue:(float)a1 andNumberOfDecimalPlaces:(long long)a2;
- (void).cxx_destruct;
- (void)setVolume:(int)a0;
- (void)setupUI;
- (double)sliderValue;
- (id)initWithMargin:(double)a0;

@end
