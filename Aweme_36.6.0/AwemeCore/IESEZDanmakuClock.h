@class CADisplayLink, NSString, IESEZDanmakuContext;
@protocol IESEZDanmakuClockDelegate;

@interface IESEZDanmakuClock : NSObject <IESEZDanmakuNotificationSubscriber, IESEZDanmakuClockProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double currentTime;
@property (nonatomic) double lastTimeDate;
@property (nonatomic) double startTime;
@property (nonatomic) double stopTime;
@property (nonatomic) double speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESEZDanmakuClockDelegate> delegate;
@property (nonatomic) unsigned long long controlState;

+ (id)componentType;

- (void)ezDanmakuNotificationCenter:(id)a0 notiEvent:(id)a1 userInfo:(id)a2;
- (void)prepareStart;
- (void)timerUpdate;
- (double)elapsedTime;
- (void).cxx_destruct;
- (void)pause;
- (void)resetTimer;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;
- (void)initTime;
- (void)resume;
- (void)dealloc;

@end
