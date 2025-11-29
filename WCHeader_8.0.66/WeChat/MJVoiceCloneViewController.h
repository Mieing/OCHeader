@class MJVoiceCloneIntroView, MJVoiceInputManager, NSString, MMUIView, MJVoiceCloneProgressMaskView, MJPlaybackViewModel, MJVoiceCloneMainView, MMTimer;
@protocol MJVoiceCloneViewControllerDelegate, MJVoiceInputManagerDelegate;

@interface MJVoiceCloneViewController : UIViewController <MJVoiceCloneIntroViewDelegate, MJVoiceCloneMainViewDelegate, MJVoiceInputManagerDelegate, MJVoiceCloneProgressMaskViewDelegate>

@property (retain, nonatomic) MMUIView *backgroundView;
@property (retain, nonatomic) MJVoiceCloneIntroView *introView;
@property (retain, nonatomic) MJVoiceCloneMainView *mainView;
@property (nonatomic) BOOL isCancelledVoiceCloneRequest;
@property (retain, nonatomic) MJVoiceCloneProgressMaskView *progressView;
@property (nonatomic) float voiceCloneFakeProgress;
@property (retain, nonatomic) MMTimer *voiceCloneFakeProgressTimer;
@property (readonly, weak, nonatomic) id<MJVoiceInputManagerDelegate> prevVoiceInputDelegate;
@property (weak, nonatomic) id<MJVoiceCloneViewControllerDelegate> delegate;
@property (readonly, weak, nonatomic) MJVoiceInputManager *voiceInputManager;
@property (readonly, weak, nonatomic) MJPlaybackViewModel *playbackVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genAudioID;

- (id)initWithPlaybackVM:(id)a0 voiceInputManager:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupViews;
- (void)voiceCloneIntroViewDidTapOnCloseButton:(id)a0;
- (void)voiceCloneIntroView:(id)a0 didTapOnAgreementLink:(id)a1;
- (void)voiceCloneIntroViewDidTapOnGoRecordingButton:(id)a0;
- (void)voiceCloneMainViewDidTapOnCloseButton:(id)a0;
- (void)voiceCloneMainViewDidStartRecording:(id)a0;
- (void)voiceCloneMainViewDidStopRecording:(id)a0;
- (void)voiceCloneMainViewDidCancelRecording:(id)a0;
- (void)voiceInputManager:(id)a0 didUpdateAudioLevel:(float)a1 withIdentifier:(id)a2;
- (void)voiceInputManager:(id)a0 didStopRecordingWithIdentifier:(id)a1 isCancelled:(BOOL)a2 audioFilePath:(id)a3 captions:(id)a4 error:(id)a5;
- (void)requestVoiceCloneWithAudioID:(id)a0 audioFilePath:(id)a1;
- (void)requestSpeechCloneRegText;
- (void)voiceCloneProgressMaskViewDidCancel:(id)a0;
- (void)updateViewsForStartVoiceClone;
- (void)updateViewsForCancelVoiceClone;
- (void)showProgressToastWithText:(id)a0;
- (void)dismissProgressToast;
- (void)showSucceededProgressToast;
- (void)_reportVoiceCloneFailedWithReason:(id)a0;
- (void)showFailedTipsWithText:(id)a0;
- (void)showFailedRetryTipsWithText:(id)a0 retryHandler:(id /* block */)a1;
- (void)updateProgressToast:(double)a0 withText:(id)a1;
- (void)updateVoiceCloneFakeProgressByOnePercent;
- (void)startFakeProgressTimer;
- (void)stopFakeProgressTimer;
- (void).cxx_destruct;

@end
