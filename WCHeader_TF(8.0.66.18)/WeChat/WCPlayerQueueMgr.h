@class NSMutableDictionary, NSString, NSMutableArray, WCPlayerView;

@interface WCPlayerQueueMgr : MMUserService <WCPlayerEventExt, SessionFlowSwizzleExt, MMServiceProtocol>

@property (weak, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) NSMutableDictionary *dicPlayerObj;
@property (retain, nonatomic) NSMutableArray *arrNewPreObjs;
@property (nonatomic) unsigned long long totalCreateCount;
@property (nonatomic) unsigned long long notHitCount;
@property (nonatomic) unsigned long long hitCount;
@property (nonatomic) unsigned long long hitAndReadyCount;
@property (nonatomic) int maxPreloadCount;
@property (nonatomic) BOOL isMulinstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)getPlayerWithArgs:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 controlView:(id)a2;
- (void)removePlayerInstance:(id)a0;
- (void)removePlayerWithScene:(unsigned long long)a0;
- (void)preloadWithArgs:(id)a0;
- (void)adjustPreloadPriority;
- (void)createPlayers;
- (void)onPlayerStartPlay:(id)a0;
- (void)onViewDidAppear:(id)a0 withVC:(id)a1;
- (void).cxx_destruct;

@end
