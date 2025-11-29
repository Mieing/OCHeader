@class NSDictionary, NSMutableDictionary;
@protocol HTSKVStore;

@interface IESLiveEnterRoomTraceContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *monitor;
@property (retain, nonatomic) NSDictionary *basicEvent;
@property (retain, nonatomic) NSMutableDictionary *detailInfos;
@property (retain, nonatomic) id<HTSKVStore> trackKVStore;
@property (retain, nonatomic) NSMutableDictionary *tempTraceInfo;
@property (retain, nonatomic) NSMutableDictionary *tempDetailInfos;
@property (nonatomic) long long estimateType;
@property (nonatomic) long long estimateDuration;

- (void)startSpan:(unsigned long long)a0;
- (void)addExtraParams:(id)a0;
- (void)resetSpan:(unsigned long long)a0;
- (void)startEnterTrace;
- (void)endSpan:(unsigned long long)a0 failErrorModel:(id)a1;
- (void)endSpan:(unsigned long long)a0;
- (void)uploadFailEnterRoomEvent:(id)a0;
- (void)setRoomAttribute:(unsigned long long)a0 withValue:(id)a1;
- (void)addEventParams:(id)a0;
- (void)endSpan:(unsigned long long)a0 atTime:(double)a1;
- (long long)getStayDuration;
- (void)addEventContextParams:(id)a0;
- (void)endEnterTrace;
- (void)calculationEnterRoomWithEndType:(unsigned long long)a0;
- (void)traceExitRoomWithType:(unsigned long long)a0 params:(id)a1;
- (void)cleanTraceRoomInfoCheck:(id)a0;
- (id)startTimeForStage:(unsigned long long)a0;
- (id)endTimeForStage:(unsigned long long)a0;
- (void)uploadEnterRoomEvent;
- (void)uploadLastTraceRoomInfoIfNeeded;
- (void)recordTraceRoomInfo;
- (void)endSpan:(unsigned long long)a0 errorCode:(unsigned long long)a1;
- (id)getFailDescWithErrorCode:(unsigned long long)a0;
- (void)resetRoomTrace;
- (id)getEnterStage:(long long)a0;
- (void)startSpan:(unsigned long long)a0 atTime:(double)a1;
- (void)calculationApiDurationIfNeed:(unsigned long long)a0;
- (void)traceEnterProcessIfNeed:(unsigned long long)a0;
- (id)getEnterAttribute:(unsigned long long)a0;
- (void)addTrackComponentLoadWithDuration:(id)a0;
- (void)addFullLinkParams;
- (void)traceFirstScreenTempCopyTraceDetailInfo;
- (void)uploadMonitorEvent:(id)a0;
- (void)updateSuccessJoinRoom;
- (double)scrollProcessDuration;
- (id)getFilterEnterRoomTags;
- (id)getFilterEnterRoomFailTags;
- (void)uploadFailEnterRoom:(id)a0 lastRecord:(BOOL)a1;
- (id)getFilterTags;
- (void)setDefaultCategory;
- (void)_traceExitRoomWithType:(unsigned long long)a0 params:(id)a1 lastRecord:(BOOL)a2;
- (id)exitActionStrWithType:(unsigned long long)a0;
- (void)clearMMKV;
- (id)failApiString:(unsigned long long)a0;
- (void)addMappedPlayerContext:(id)a0;
- (BOOL)isStarted;
- (void).cxx_destruct;
- (id)init;
- (void)merge:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
