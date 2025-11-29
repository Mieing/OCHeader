@class NSString, WeMediaApi;

@interface WAJSContextPlugin_WeMedia : WAJSContextPluginBase <WCAudioModuleDelegate>

@property (weak, nonatomic) WeMediaApi *wemedia_api;
@property (nonatomic) BOOL isAudioInterrupt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addObserver;
- (void)removeObserver;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (BOOL)TryStartAudioDevice:(unsigned long long)a0;
- (void)TryStopAudioDevice:(unsigned long long)a0;
- (void)onAudioEnterBackground;
- (void)onAudioEnterForeround;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (id)mixListForAudioModule:(id)a0;
- (BOOL)setActive:(BOOL)a0 scene:(int)a1;
- (id)getIdentifier;
- (void)activeAudioSession;
- (void).cxx_destruct;

@end
