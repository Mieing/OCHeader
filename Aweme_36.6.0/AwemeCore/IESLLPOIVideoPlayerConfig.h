@class NSString;

@interface IESLLPOIVideoPlayerConfig : NSObject <NSCopying>

@property (nonatomic) long long scalingMode;
@property (nonatomic) BOOL enableTouchPause;
@property (nonatomic) BOOL fullTouchAction;
@property (nonatomic) BOOL showProgressSlider;
@property (nonatomic) double progressSliderBottom;
@property (nonatomic) BOOL mutePlay;
@property (nonatomic) BOOL showMuteView;
@property (nonatomic) struct CGPoint { double x; double y; } mutePosition;
@property (nonatomic) BOOL showFullPlay;
@property (nonatomic) BOOL useCoolProgress;
@property (copy, nonatomic) NSString *groupName;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
