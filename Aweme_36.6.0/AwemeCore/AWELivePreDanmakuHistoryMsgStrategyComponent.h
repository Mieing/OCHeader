@class NSTimer, NSString, IESEZDanmakuContext;

@interface AWELivePreDanmakuHistoryMsgStrategyComponent : NSObject <IESEZDanmakuNotificationSubscriber, IESEZDanmakuControlProtocol, IESEZDanmakuComponentProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (retain, nonatomic) NSTimer *historyMsgConsumeTimer;
@property (nonatomic) BOOL historyMsgDisplaying;
@property (nonatomic) double historyMsgConsumeTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long controlState;

- (void)ezDanmakuNotificationCenter:(id)a0 notiEvent:(id)a1 userInfo:(id)a2;
- (void)stopHistoryConsumeTimer;
- (void)exitHistoryMsgMode;
- (void)startHistoryConsumeTimer;
- (void)enterHistoryMsgMode;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;
- (void)resume;

@end
