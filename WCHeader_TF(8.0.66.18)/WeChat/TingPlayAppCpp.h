@class NSString;

@interface TingPlayAppCpp : TingApiPlayAppCpp <TingPlayApp>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create:(int)a0 appName:(id)a1 player:(id)a2 miniHelper:(id)a3 nowplayingHelper:(id)a4;
+ (id)createPlayApp:(id)a0;

- (id)getPlayTask;
- (unsigned long long)lastTerminateTimeStamp;
- (id)lastPlayedTape;
- (id)getReportService;
- (void)addPlayTaskControllerListener:(id)a0;
- (void)removePlayTaskControllerListener:(id)a0;
- (void)onPlayTaskChange:(id)a0;
- (id)getPlatformPlayerObj;
- (void)setPlatformPlayerObj:(id)a0;
- (id)getNowPlayingModule;
- (id)getMinimizeModule;
- (void)setMinimizeModule:(id)a0;
- (void)setNowPlayingModule:(id)a0;
- (void)setAudioFocus:(id)a0;
- (void)onServiceChanged:(id)a0;
- (void)onPlayingItemUpdate:(id)a0;
- (void)onTingPlayerStateChanged:(id)a0 state:(int)a1 event:(int)a2 eventContext:(id)a3;
- (void)onPlayModeChanged;
- (void)onPlayingIndexChanged:(int)a0 source:(id)a1 context:(id)a2 reason:(int)a3;
- (void)onTingPlayTaskPlayingContextUpdated:(id)a0;
- (void)onTingPlayTaskStateChanged:(id)a0 state:(int)a1 event:(int)a2 eventContext:(id)a3;
- (void)onCurrentPlayingListSourceWillChange:(id)a0 nextSource:(id)a1;
- (void)onPlayTaskInfoEvent:(id)a0 event:(int)a1 info:(id)a2;

@end
