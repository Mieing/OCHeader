@class NSString, NSMutableDictionary;

@interface IESLiveEnterRoomProcessItem : NSObject

@property (retain, nonatomic) NSString *index;
@property (nonatomic) BOOL entering;
@property (copy, nonatomic) id /* block */ reportComplete;
@property (copy, nonatomic) id /* block */ roomInfoBlock;
@property (nonatomic) BOOL firstFrameRender;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (nonatomic) BOOL overTimeInterval;
@property (nonatomic) unsigned long long firstScreenStage;
@property (nonatomic) double watchDuration;
@property (nonatomic) double enterTime;
@property (nonatomic) double p0DurationTime;
@property (nonatomic) double p1DurationTime;
@property (nonatomic) double playerStartTime;
@property (nonatomic) double playerDurationTime;
@property (nonatomic) double playerPullStreamTime;
@property (nonatomic) BOOL firstScreenReported;

- (void)addExtra:(id)a0;
- (void)addCommonParams;
- (void)timeOver;
- (void)reportFirstScreenInfo;
- (void)startEnterWithRoomId:(id)a0;
- (void)updateFirstScreenStage:(unsigned long long)a0 duration:(double)a1;
- (void)reportEndLiveRoom;
- (void)closeRoomManualType:(unsigned long long)a0 exceptionType:(unsigned long long)a1 extra:(id)a2;
- (void)enterFailRoomExceptionType:(unsigned long long)a0 extra:(id)a1;
- (void)traceAppDetectExit:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (void)clear;
- (id)init;

@end
