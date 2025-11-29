@class AWEPostPageAudioServiceDependencies, NSString, ACCVoiceEffectManager;
@protocol AWEPostPageContext;

@interface AWEPostPageAudioHandler : NSObject <AWEPostPageAudioService>

@property (retain, nonatomic) AWEPostPageAudioServiceDependencies *dependencies;
@property (retain, nonatomic) ACCVoiceEffectManager *voiceEffectManager;
@property (nonatomic) long long changeOfflineMusicSignal;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)recoverAudioFragmentIfNeeded;
- (void)fetchVoiceEffectIfNecessaryWithCallback:(id /* block */)a0;
- (void)sendChangeOfflineMusicSignal;
- (void)recoverVoiceEffectFromDraftIfNecessaryWithCompletion:(id /* block */)a0;
- (void)addLogToVideoMuteFeedback;
- (void)p_recoverClassicalMVIfNecessary;
- (void).cxx_destruct;

@end
