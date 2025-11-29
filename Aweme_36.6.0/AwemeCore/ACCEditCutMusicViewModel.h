@class AVAsset, RACSubject, AWEAudioClipFeatureManager, AWEVideoPublishViewModel, RACSignal, NSString;
@protocol ACCVideoConfigProtocol, AWEEditKit, AEKMegaEditor, ACCEditMusicServiceProtocol, ACCVideoEditFlowControlService, IESServiceProvider, ACCEditServiceProtocol;

@interface ACCEditCutMusicViewModel : NSObject <ACCEditCutMusicServiceProtocol>

@property (retain, nonatomic) RACSubject *checkMusicFeatureToastSubject;
@property (retain, nonatomic) RACSubject *didClickCutMusicButtonSubject;
@property (retain, nonatomic) RACSubject *didDismissPanelSubject;
@property (retain, nonatomic) RACSubject *cutMusicRangeDidChangeSubject;
@property (retain, nonatomic) RACSubject *didFinishCutMusicSubject;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> editFlowControlService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> editMusicService;
@property (weak, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (nonatomic) BOOL isProcessingClipMusic;
@property (retain, nonatomic) AVAsset *lastClipAsset;
@property (nonatomic) struct _HTSAudioRange { double location; double length; } lastClipAudioRange;
@property (nonatomic) long long repeatCount;
@property (nonatomic) BOOL musicShareStory25FirstSeekFlag;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) AWEAudioClipFeatureManager *audioClipFeatureManager;
@property (readonly, nonatomic) BOOL isClipViewShowing;
@property (readonly, nonatomic) RACSignal *checkMusicFeatureToastSignal;
@property (readonly, nonatomic) RACSignal *didClickCutMusicButtonSignal;
@property (readonly, nonatomic) RACSignal *didDismissPanelSignal;
@property (readonly, nonatomic) RACSignal *cutMusicRangeDidChangeSignal;
@property (readonly, nonatomic) RACSignal *didFinishCutMusicSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isImageAlbum;
- (void)clipMusicAfterAddedIfNeeded;
- (void)clipMusicForLivePhotoAfterAddedIfNeeded;
- (void)clipMusicForLivePhotoAfterAddedIfNeededWithLengthLimit:(id)a0;
- (void)syncClipRangeResetPlay:(BOOL)a0;
- (void)clipMusic:(struct _HTSAudioRange { double x0; double x1; })a0 repeatCount:(long long)a1;
- (void)sendDidFinishCutMusicSignal:(id)a0;
- (void)clipMusicBeforeAddedIfNeeded:(id)a0 music:(id)a1 asset:(id)a2;
- (void)sendDidClickCutMusicButtonSignal;
- (void)sendCutMusicRangeDidChangeSignal:(id)a0;
- (void)sendDidDismissPanelSignal;
- (BOOL)multiProjectsOrImageAlbum;
- (double)p_appropriateDurationOfMusicModel:(id)a0;
- (struct _HTSAudioRange { double x0; double x1; })p_getDefaultClipRange;
- (long long)p_getSuggestedRepeatCount;
- (void)clipMusicForLivePhoto:(struct _HTSAudioRange { double x0; double x1; })a0 repeatCount:(long long)a1;
- (void)sendCheckMusicFeatureToastSignal;
- (id)repositoty;
- (void).cxx_destruct;
- (void)dealloc;
- (id)musicAsset;

@end
