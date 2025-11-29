@class NSString, WeMediaApi;
@protocol WAJITBindingMediaModuleDelegate;

@interface WAJITBindingMediaModule : NSObject <WeMediaDelegate, WCAudioModuleDelegate>

@property (retain, nonatomic) WeMediaApi *wemedia_api;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL isAudioInterrupt;
@property (weak, nonatomic) id<WAJITBindingMediaModuleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithContext:(id)a0;
- (void)dealloc;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)weMediaLOG:(int)a0 log:(const char *)a1;
- (BOOL)weMediaGetExternalConfig:(id)a0 defaultVal:(BOOL)a1;
- (BOOL)weMediaTryStartAudioDevice:(unsigned long long)a0;
- (void)weMediaTryStopAudioDevice:(unsigned long long)a0;
- (id)weMediaGetAbsolutePath:(id)a0;
- (BOOL)weMediaRegisterExternaImage:(const char *)a0 dataLen:(unsigned long long)a1 imageId:(int)a2 width:(int)a3 height:(int)a4;
- (void)weMediaUnregisterExternaImage:(int)a0;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (id)mixListForAudioModule:(id)a0;
- (void)sendAudioInterruptionBeginEvent;
- (void)sendAudioInterruptionEndEvent;
- (BOOL)setActive:(BOOL)a0 scene:(int)a1;
- (id)getIdentifier;
- (void)activeAudioSession:(int)a0;
- (void).cxx_destruct;

@end
