@class IESEZDanmakuViewReusePool, IESEZDanmakuContext, NSString, IESEZDanmakuNotificationCenter, NSMutableArray;
@protocol IESEZDanmakuDispatcherDelegate, IESEZDanmakuQueueProtocol, IESEZDanmakuDataProtocol, IESEZDanmakuDispatcherDispatchSpaceDelegate;

@interface IESEZDanmakuDispatcher : NSObject <IESEZDanmakuDataDelegate, IESEZDanmakuQueueDelegate, IESEZDanmakuDispatcherProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (retain, nonatomic) id<IESEZDanmakuQueueProtocol> queue;
@property (nonatomic) unsigned long long displayedDanmakuCount;
@property (retain, nonatomic) NSMutableArray *displayingDanmakus;
@property (nonatomic) double nextDispatchTime;
@property (retain, nonatomic) IESEZDanmakuViewReusePool *reusePool;
@property (retain, nonatomic) IESEZDanmakuNotificationCenter *notificationCenter;
@property (retain, nonatomic) id<IESEZDanmakuDataProtocol> waitingDispatchData;
@property (retain, nonatomic) NSMutableArray *danmakuFilters;
@property (weak, nonatomic) id<IESEZDanmakuDispatcherDispatchSpaceDelegate> dispatchSpaceDelegate;
@property (nonatomic) unsigned long long dispatchMode;
@property (nonatomic) double dispatchSpace;
@property (copy, nonatomic) id /* block */ dispatchDanmakuInject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESEZDanmakuDispatcherDelegate> delegate;
@property (nonatomic) unsigned long long controlState;

+ (id)componentType;

- (id)currentDanmakuQueue;
- (unsigned long long)prepareToDispatchDanmakuCount;
- (void)clearAllDanmaku;
- (void)updateWithTime:(double)a0;
- (void)setDanmakuQueue:(id)a0;
- (void)loadDanmaku:(id)a0;
- (void)clearAllDisplayingDanmaku;
- (unsigned long long)displayingDanmakuCount;
- (void)addDanmakuFilter:(id)a0;
- (void)danmakuData:(id)a0 stateDidChangeTo:(unsigned long long)a1;
- (void)resetDispatcher;
- (BOOL)hasMoreDanmakuToDispatch;
- (BOOL)dispatchDanmaku:(id)a0;
- (void)calculateNextDispatchTimeWithDanmakuData:(id)a0;
- (BOOL)realDispatchDanmaku:(id)a0;
- (void)didClickDanmakuData:(id)a0;
- (void)danmakuQueue:(id)a0 didDiscardDanmaku:(id)a1;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;
- (void)resume;

@end
