@class TTVideoEngineEventBase, NSString, NSMutableDictionary;
@protocol TTVideoEngineEventLoggerDelegate;

@interface TTVideoEngineEventOneOpera : NSObject <TTVideoEngineEventOneOperaProtocol>

@property (retain, nonatomic) TTVideoEngineEventBase *eventBase;
@property (copy, nonatomic) NSString *operaType;
@property (copy, nonatomic) NSString *endType;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned long long costTime;
@property (retain, nonatomic) NSMutableDictionary *lastOperaTime;
@property (nonatomic) long long fromVideoPos;
@property (nonatomic) long long toVideoPos;
@property (copy, nonatomic) NSString *stateBefore;
@property (copy, nonatomic) NSString *stateAfter;
@property (nonatomic) long long audioLenAfter;
@property (nonatomic) long long videoLenAfter;
@property (nonatomic) long long downloadSpeed;
@property (nonatomic) long long isSeekInCache;
@property (nonatomic) long long retryCount;
@property (nonatomic) long long mIndex;
@property (copy, nonatomic) NSString *resolutionBefore;
@property (copy, nonatomic) NSString *resolutionAfter;
@property (nonatomic) long long configBitrateBefore;
@property (nonatomic) long long configBitrateAfter;
@property (weak, nonatomic) id<TTVideoEngineEventLoggerDelegate> delegate;
@property (nonatomic) long long reportLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendOneOpera:(int)a0;
- (void)moviePlayRetryWithError:(id)a0 strategy:(long long)a1 apiver:(unsigned long long)a2;
- (void)seekToTime:(double)a0 toPos:(double)a1;
- (id)endSeek:(id)a0 isSeekInCache:(long long)a1;
- (id)initWithEventBase:(id)a0;
- (id)jsonDict;
- (void).cxx_destruct;

@end
