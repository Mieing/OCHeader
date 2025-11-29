@class UIColor;

@interface WCSightLocalVideoImageSliderInitParam : NSObject

@property (nonatomic) BOOL isSystemCrop;
@property (nonatomic) BOOL cropAllowEnlarge;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) struct CGPoint { double x; double y; } sliderContentOffset;
@property (nonatomic) long long sideFlagStyle;
@property (nonatomic) BOOL isDurationMarkerEnabled;
@property (nonatomic) BOOL isStartTimeMarkerEnabled;
@property (nonatomic) double startTimeMarkerKeepTimeSec;
@property (nonatomic) BOOL isHighlightMaskEnabled;
@property (nonatomic) double maskRectRadius;
@property (retain, nonatomic) UIColor *customHightlightMaskShadowColor;

- (void).cxx_destruct;

@end
