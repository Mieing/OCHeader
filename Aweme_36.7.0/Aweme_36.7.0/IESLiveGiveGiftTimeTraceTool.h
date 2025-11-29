@class HTSEventContext, HTSLiveGiftStruct, NSMutableDictionary;

@interface IESLiveGiveGiftTimeTraceTool : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSLiveGiftStruct *gift;
@property (nonatomic) BOOL sendBySelf;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) NSMutableDictionary *traceMap;

- (id)generateNewTraceToolWithGift:(id)a0;
- (void)traceWithStep:(unsigned long long)a0 timestamp:(double)a1 end:(BOOL)a2;
- (long long)durationBetweenStep:(unsigned long long)a0 withStep:(unsigned long long)a1;
- (long long)timestampWithStep:(unsigned long long)a0;
- (id)initWithTrackContext:(id)a0 gift:(id)a1 sendBySelf:(BOOL)a2 isAnchor:(BOOL)a3;
- (void)reportTrackAndMonitor;
- (long long)durationBetweenStep:(unsigned long long)a0 withTime:(long long)a1;
- (void).cxx_destruct;

@end
