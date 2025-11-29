@class OrderedDictionary, CMessageWrap;

@interface VoiceMessageReporter : NSObject

@property (nonatomic) float currentPlayRate;
@property (nonatomic) unsigned long long lastRecordTimestamp;
@property (retain, nonatomic) OrderedDictionary *playRateDuration;
@property (retain, nonatomic) CMessageWrap *msgWrap;

+ (void)onShowMinimizeView:(int)a0;
+ (void)onMinimizeViewExpose;
+ (void)onCloseMinimizeView;

- (id)init;
- (void)onStartSpeedPlay;
- (void)onStopSpeedPlay;
- (void)onPlaySpeedChangeFrom:(float)a0 to:(float)a1;
- (void)onStartPlay;
- (void)onStopPlayWithReason:(int)a0;
- (id)commonReportInfo;
- (void)recordTimestamp;
- (void).cxx_destruct;

@end
