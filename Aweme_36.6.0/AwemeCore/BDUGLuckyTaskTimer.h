@class NSTimer, NSMutableDictionary, NSString;
@protocol BDUGLuckyTimerTaskExecuteDelegate;

@interface BDUGLuckyTaskTimer : NSObject <BDUGLuckyTimerInternalProtocol>

@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) id<BDUGLuckyTimerTaskExecuteDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *sceneCurrentCount;
@property (retain, nonatomic) NSMutableDictionary *sceneTimeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTaskExecuteDelegate:(id)a0;
- (void)stopLuckyTaskTimerForScene:(id)a0;
- (void)__dismissTaskTimer;
- (void)startLuckyTaskTimerForScene:(id)a0 timeLimit:(double)a1;
- (void)__setupTaskTimer;
- (void)__countTime;
- (BOOL)__checkTimerStatus;
- (BOOL)__hasReachedLimit:(id)a0;
- (void)startLuckyTaskTimerForScene:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
