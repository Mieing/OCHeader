@class NSArray, NSString, NSMutableArray, IESLiveEZDanmakuReuseViewPool;
@protocol IESLiveEZDanmakuDispatcherDelegate;

@interface IESLiveEZDanmakuMutexDispatcher : NSObject <IESLiveEZDanmakuSpiritDelegate, IESLiveEZDanmakuDispatcherProtocol> {
    NSArray *_activatedSpirits;
}

@property (retain, nonatomic) NSMutableArray *queuedSpirits;
@property (retain, nonatomic) NSMutableArray *highPrioritySpirits;
@property (retain, nonatomic) NSMutableArray *sortPrioritySpirits;
@property (retain, nonatomic) NSMutableArray *mutableActivatedSipirts;
@property (copy, nonatomic) NSArray *channels;
@property (nonatomic) double channelHeight;
@property (retain, nonatomic) IESLiveEZDanmakuReuseViewPool *viewPool;
@property (nonatomic) double moveSpeed;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } mutexEdge;
@property (nonatomic) long long orientation;
@property (nonatomic) float availablePercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveEZDanmakuDispatcherDelegate> delegate;

- (void)resetMoveSpeed:(double)a0;
- (void)fragmentOrientationChanged:(long long)a0;
- (void)resetChannelHeight:(double)a0;
- (void)setMutextEdge:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateWithEZDanamkuSettings:(id)a0;
- (void)deactivateAllSpirits;
- (void)updateDanmakuAvailablePercent:(float)a0;
- (id)availableChannelsForAll;
- (void)addSpiritToSortQueue:(id)a0;
- (void)updateEZDanmakuSpirit:(id)a0 withSettings:(id)a1;
- (id)activeSpiritOnChannel:(id)a0;
- (BOOL)isAcceptActiveChannel:(id)a0 forSpirit:(id)a1;
- (id)popSpiritFromQueue:(id)a0 withCondition:(id /* block */)a1;
- (void)p_dispatchSpirit:(id)a0 withChannel:(id)a1;
- (void)danmakuSpirit:(id)a0 stateDidChange:(long long)a1;
- (id)activatedSpirits;
- (void)addEZDanmakuSiprit:(id)a0;
- (void)dispatchSpirits;
- (void)assembleReuseViewPool:(id)a0;
- (void)clearQueuedSpirits;
- (void).cxx_destruct;
- (id)initWithOrientation:(long long)a0;

@end
