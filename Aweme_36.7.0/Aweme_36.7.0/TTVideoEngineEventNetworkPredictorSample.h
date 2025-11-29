@class NSString, TTVideoEngineEventContext, NSObject, TTVideoEngineEventBase;
@protocol OS_dispatch_queue, TTVideoEngineEventLoggerDelegate;

@interface TTVideoEngineEventNetworkPredictorSample : NSObject <TTVideoEngineEventNetworkSpeedPredictorSampleProtocol>

@property (retain, nonatomic) TTVideoEngineEventContext *mEventContext;
@property (retain, nonatomic) TTVideoEngineEventBase *eventBase;
@property (nonatomic) BOOL mIsStarted;
@property (nonatomic) long long inputType;
@property (nonatomic) long long outputType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<TTVideoEngineEventLoggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setIntValueWithKey:(long long)a0 value:(long long)a1;
+ (void)setFloatValueWith:(long long)a0 value:(float)a1;

- (void)stopRecord;
- (void)startRecord;
- (id)convertToJsonData:(id)a0;
- (void)updateEventBaseInfo;
- (long long)doBitrateMap:(long long)a0;
- (void)addExtraMapInfoForTrackType:(id)a0 mediaType:(long long)a1;
- (void)popHead;
- (id)toJsonDic;
- (void)updateSingleNetworkSpeed:(id)a0 audioInfo:(id)a1 realInterval:(int)a2;
- (id)initWithEventBase:(id)a0;
- (void)sendEvent:(long long)a0;
- (void).cxx_destruct;
- (double)currentTime;

@end
