@class NSMutableDictionary;

@interface IESLivePlaybackEnterRoomTraceContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *detailInfos;
@property (nonatomic) BOOL isFinished;

- (void)startSpan:(unsigned long long)a0;
- (void)endSpan:(unsigned long long)a0;
- (void)endSpan:(unsigned long long)a0 atTime:(double)a1;
- (id)getEnterStage:(unsigned long long)a0;
- (void)startSpan:(unsigned long long)a0 atTime:(double)a1;
- (void)trackFailEnterRoomEventWithParams:(id)a0;
- (void)addFullLinkParams:(id)a0;
- (void)trackEnterRoomEventWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
