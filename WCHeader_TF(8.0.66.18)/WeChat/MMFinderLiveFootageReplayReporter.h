@class MMFinderLiveFootageReplayModel, NSString;

@interface MMFinderLiveFootageReplayReporter : NSObject

@property (retain, nonatomic) MMFinderLiveFootageReplayModel *replayModel;
@property (nonatomic) unsigned long long replayLengthInMilliseconds;
@property (retain, nonatomic) NSString *correlationId;

- (id)initWithFootageReplayModel:(id)a0;
- (void)onFootageReplayEnter;
- (void)onFootageReplayStartWithLengthInMilliseconds:(unsigned long long)a0;
- (void)onFootageReplayLeaveWithDurationInMilliseconds:(unsigned long long)a0;
- (void)onFootageReplayOrientationChangeInvokedWithTargetOrientation:(long long)a0;
- (void)onFootageReplayPausedAtMediaTimeInMilliseconds:(unsigned long long)a0;
- (void)onFootageReplaySeekFromMediaTimeInMilliseconds:(unsigned long long)a0 toMediaTimeInMilliseconds:(unsigned long long)a1;
- (void)reportEvent:(id)a0 params:(id)a1;
- (id)replaceCommaToSemicolon:(id)a0;
- (void).cxx_destruct;

@end
