@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VoIPPhysicalFeedbackService : MMUserService <VoIPAudioServiceExtension, MMServiceProtocol>

@property (nonatomic) BOOL isActived;
@property (nonatomic) BOOL isVideoMode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isReadyToLaunchTips;
@property (nonatomic) BOOL isLaunchTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playSoundWithFileName:(id)a0 fileType:(id)a1 volume:(float)a2 ambient:(BOOL)a3;
- (void)playSoundWithFileName:(id)a0 fileType:(id)a1 volume:(float)a2 ambient:(BOOL)a3 withCompletion:(id /* block */)a4;
- (void)playCloseSoundIfShouldBeLower:(BOOL)a0;
- (void)playCloseSoundIfShouldBeLower:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)launchTips:(BOOL)a0;
- (void)launchTips;
- (void)launchEndingWithCompletion:(id /* block */)a0;
- (void)completeAudioUnitOutputInitialization;
- (void)reset;
- (void)openIfIsVideoMode:(BOOL)a0;
- (void)close;
- (id)init;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceQuitCompulsivelyFromInterruption;
- (void)voIPAudioServiceDidReceiveAudioUnitPlaybackCallbackFirst:(id)a0;
- (void).cxx_destruct;

@end
