@class NSString;

@interface TingApiPlayTaskListenerCpp : UnitRCObjcBaseProxyClass <TingApiPlayTaskListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayModeChanged;
- (void)onPlayingIndexChanged:(int)a0 source:(id)a1 context:(id)a2 reason:(int)a3;
- (void)onTingPlayTaskPlayingContextUpdated:(id)a0;
- (void)onTingPlayTaskStateChanged:(id)a0 state:(int)a1 event:(int)a2 eventContext:(id)a3;
- (void)onCurrentPlayingListSourceWillChange:(id)a0 nextSource:(id)a1;
- (void)onPlayTaskInfoEvent:(id)a0 event:(int)a1 info:(id)a2;

@end
