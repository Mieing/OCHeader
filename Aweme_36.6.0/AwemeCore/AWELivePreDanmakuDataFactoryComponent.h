@class NSTimer, NSString, IESEZDanmakuContext;

@interface AWELivePreDanmakuDataFactoryComponent : NSObject <IESEZDanmakuNotificationSubscriber, IESEZDanmakuControlProtocol, IESEZDanmakuComponentProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (retain, nonatomic) NSTimer *expiredDataTimer;
@property (nonatomic) double expiredTime;
@property (nonatomic) BOOL historyMsgStrategyRunning;
@property (nonatomic) BOOL shouldStartExpiredTimer;
@property (copy, nonatomic) id /* block */ danmakuDataCreated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long controlState;

+ (id)componentType;

- (void)clearExpiredData:(id)a0;
- (void)danmakuDataDidCreate:(id)a0;
- (void)ezDanmakuNotificationCenter:(id)a0 notiEvent:(id)a1 userInfo:(id)a2;
- (void)prepareStart;
- (void)createDanmakuDataWithMetaData:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)pause;
- (void)startTimer;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;
- (void)resume;
- (void)dealloc;

@end
