@class MJPublisherSlider, MMUILabel;

@interface MJTimelineVolumeSliderInfo : NSObject

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *valueLabel;
@property (retain, nonatomic) MJPublisherSlider *slider;

- (id)initWithTitleLabel:(id)a0 valueLabel:(id)a1 slider:(id)a2;
- (void)setVolume:(float)a0;
- (void).cxx_destruct;

@end
