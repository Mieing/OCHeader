@interface AWELaunchMetric : NSObject

@property long long type;
@property (readonly) double startTimestampWithoutSystem;
@property double launchCompletionTaskBeginTimestamp;
@property double launchCompletionTaskEndTimestamp;
@property double feedReadyTaskBeginTimestamp;
@property double feedReadyTaskEndTimestamp;
@property (readonly) long long backgroundType;
@property (readonly) double startTimestamp;
@property (readonly) double endTimestamp;
@property (readonly) double processStartTime;
@property (readonly) double mainLoadStartTimestamp;
@property (readonly) double mainFunctionStarTimestamp;
@property (readonly) double willFinishLaunchingStartTimestamp;
@property (readonly) double didFinishLaunchingStartTimestamp;
@property (readonly) double finishLaunchEndTimestamp;
@property (readonly) double rootVCAppearTimestamp;
@property (readonly) double firstEnterForegroundBeginStartTimestamp;
@property double fistStartPlayTimestamp;
@property (readonly) double totalDuration;
@property (readonly) double systemInitDuration;
@property (readonly) double loadDuration;
@property (readonly) double initializerDuration;
@property (readonly) double mainDuration;
@property (readonly) double finishLaunchDuration;
@property (readonly) double foregroundDuration;
@property (readonly) double uiRenderDuration;

+ (id)currentMetric;

- (id)coldLaunchURLString;
- (BOOL)isBackgroundLaunchType;
- (BOOL)fixPrewarmLaunchStartTime;
- (BOOL)enableBGDownload;
- (BOOL)hasMarkedNextRelaunchByPostNoti;
- (void)markBackgroundLaunchWithTypeTimes;
- (void)markPerformFetchTimes;
- (void)markNextRelaunchByPostNoti;
- (BOOL)isBackgroundLaunch;
- (void)markMainThreadScheduleStatus:(long long)a0;

@end
