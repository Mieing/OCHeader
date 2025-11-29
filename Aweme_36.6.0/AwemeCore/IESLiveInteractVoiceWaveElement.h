@class NSString, IESLiveInteractVoiceWaveView;
@protocol IESLiveCompoundSubscription, IESLiveInteractVoiceWaveRouter;

@interface IESLiveInteractVoiceWaveElement : IESLiveInteractSeatElementBase <IESLiveInteractVoiceWaveElementProvider>

@property (retain, nonatomic) IESLiveInteractVoiceWaveView *voiceWaveView;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> compoundDisposable;
@property (weak, nonatomic) id<IESLiveInteractVoiceWaveRouter> voiceWaveRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupVoiceWaveRouter:(id)a0;
- (void)elementLayoutBaseUI;
- (void)elementMount;
- (void)elementUnmount;
- (void)elementUserDidChanged:(id)a0;
- (void)removeVoiceWaveView;
- (void)loadVoiceWaveView;
- (void)updateVoiceWaveViewRegister;
- (BOOL)isVideoLiveScene;
- (void).cxx_destruct;
- (void)dealloc;

@end
