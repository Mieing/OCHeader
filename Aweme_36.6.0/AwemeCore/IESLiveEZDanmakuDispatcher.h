@class NSString, NSArray, NSMutableArray, IESLiveEZDanmakuReuseViewPool;
@protocol IESLiveEZDanmakuDispatcherDelegate;

@interface IESLiveEZDanmakuDispatcher : NSObject <IESLiveEZDanmakuSpiritDelegate, IESLiveEZDanmakuDispatcherProtocol> {
    NSArray *_activatedSpirits;
}

@property (retain, nonatomic) NSMutableArray *queuedSpirits;
@property (retain, nonatomic) NSMutableArray *mutableActivatedSipirts;
@property (retain, nonatomic) IESLiveEZDanmakuReuseViewPool *viewPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveEZDanmakuDispatcherDelegate> delegate;

- (void)fragmentOrientationChanged:(long long)a0;
- (void)updateWithEZDanamkuSettings:(id)a0;
- (void)deactivateAllSpirits;
- (void)danmakuSpirit:(id)a0 stateDidChange:(long long)a1;
- (id)activatedSpirits;
- (void)addEZDanmakuSiprit:(id)a0;
- (void)dispatchSpirits;
- (void)assembleReuseViewPool:(id)a0;
- (void)clearQueuedSpirits;
- (void)p_dispatchSpirit:(id)a0;
- (void).cxx_destruct;

@end
