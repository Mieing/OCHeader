@interface MMFinderLiveOrientationReportRecoder : NSObject

@property (nonatomic) unsigned long long portraitDuration;
@property (nonatomic) unsigned long long landscapeDuration;
@property (nonatomic) unsigned long long currOrientationStartTime;
@property (nonatomic) long long currOrientation;
@property (nonatomic) BOOL isStartRecord;

- (void)startRecord;
- (void)endRecord;
- (void)updateCurrOrientation:(long long)a0;
- (BOOL)checkIsOrientationModeChange:(long long)a0 preOri:(long long)a1;
- (void)updatePreOrientationModeDuration:(long long)a0;
- (void)updateCurrOrientationStartTime;

@end
