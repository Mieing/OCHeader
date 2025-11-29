@class NSString;

@interface TingLyricDataServiceCpp : UnitRCObjcBaseProxyClass <TingLyricDataService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setListener:(id)a0;
- (id)getCurrLyric:(double)a0;
- (void)onServiceChanged:(id)a0;
- (void)onPlayingItemUpdate:(id)a0;
- (void)onTingPlayerStateChanged:(id)a0 state:(int)a1 event:(int)a2 eventContext:(id)a3;
- (void)onPlayModeChanged;
- (void)onPlayingIndexChanged:(int)a0 source:(id)a1 context:(id)a2 reason:(int)a3;
- (void)onTingPlayTaskPlayingContextUpdated:(id)a0;
- (void)onTingPlayTaskStateChanged:(id)a0 state:(int)a1 event:(int)a2 eventContext:(id)a3;
- (void)onCurrentPlayingListSourceWillChange:(id)a0 nextSource:(id)a1;
- (void)onPlayTaskInfoEvent:(id)a0 event:(int)a1 info:(id)a2;
- (void)onPlayEvent:(id)a0 event:(int)a1 msg:(id)a2;
- (void)onPlayInfoEvent:(id)a0 event:(int)a1 msg:(id)a2;
- (void)onProgressChanged:(long long)a0 displayTimeMs:(long long)a1 duration:(long long)a2;

@end
