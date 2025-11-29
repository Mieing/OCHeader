@class UnitRCWeakPtr, TingPlayerContext, NSString;
@protocol TingApiPlayTaskListenerBridgeDelegate;

@interface TingApiPlayTaskListenerBridge : UnitRCObjcBaseClass <TingApiPlayTaskListener, TingApiPlayerListener>

@property (weak, nonatomic) id<TingApiPlayTaskListenerBridgeDelegate> delegate;
@property (retain, nonatomic) UnitRCWeakPtr *playTask;
@property (retain, nonatomic) TingPlayerContext *playingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)setup:(id)a0;
- (void)reset;
- (void)onPlayModeChanged;
- (void)onPlayingIndexChanged:(int)a0 source:(id)a1 context:(id)a2 reason:(int)a3;
- (void)onTingPlayTaskPlayingContextUpdated:(id)a0;
- (void)onTingPlayTaskStateChanged:(id)a0 state:(int)a1 event:(int)a2 eventContext:(id)a3;
- (void)onCurrentPlayingListSourceWillChange:(id)a0 nextSource:(id)a1;
- (void)onPlayTaskInfoEvent:(id)a0 event:(int)a1 info:(id)a2;
- (void)onPlayEvent:(id)a0 event:(int)a1 msg:(id)a2;
- (void)onProgressChanged:(long long)a0 displayTimeMs:(long long)a1 duration:(long long)a2;
- (void).cxx_destruct;

@end
