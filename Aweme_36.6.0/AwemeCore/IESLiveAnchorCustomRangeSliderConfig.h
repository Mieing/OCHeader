@class NSString, UIColor;

@interface IESLiveAnchorCustomRangeSliderConfig : NSObject

@property (retain, nonatomic) NSString *sliderName;
@property (nonatomic) BOOL isBidirectional;
@property (nonatomic) long long maxValue;
@property (nonatomic) long long minValue;
@property (nonatomic) long long defaultValue;
@property (nonatomic) BOOL needShowDefaultPoint;
@property (nonatomic) long long originValue;
@property (nonatomic) long long stepAdjustValue;
@property (retain, nonatomic) UIColor *highlightedTrackColor;
@property (copy, nonatomic) id /* block */ onValueChangedBlock;
@property (copy, nonatomic) id /* block */ onValueChangeEndBlock;

- (void).cxx_destruct;
- (id)init;

@end
