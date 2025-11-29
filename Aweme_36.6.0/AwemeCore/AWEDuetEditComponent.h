@class AVAsset, VEAudioDetector, NSString, UIView, AWERepoDuetModel, AWEKaraokeEffectEditViewController;
@protocol ACCEditAudioEffectProtocolD, ACCStickerServiceProtocol, ACCEditViewContainer, ACCCTRServiceProtocol, ACCEditServiceProtocol;

@interface AWEDuetEditComponent : ACCFeatureComponent <AWEKaraokeEffectEditDelegate, ACCStickerPannelAnimationVCDelegate>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditAudioEffectProtocolD> audioService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (retain, nonatomic) AVAsset *duetSourceAsset;
@property (retain, nonatomic) UIView *tuningBGView;
@property (retain, nonatomic) AWEKaraokeEffectEditViewController *tuningVC;
@property (retain, nonatomic) AWERepoDuetModel *repoDuet;
@property (retain, nonatomic) VEAudioDetector *audioDetector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)draftResourceIDsToDownloadForPublishViewModel:(id)a0;

- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidReceiveMemoryWarning:(unsigned long long)a0;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)stickerPannelVCDidDismiss;
- (id)createTuningBarItem;
- (void)updateBGMAssetVolume;
- (void)updateVocalAssetVolume;
- (void)updateDuetSourceAudioBalance;
- (void)updateVocalAlign;
- (void)karaokeSoundEffectDidChanged:(id)a0;
- (void)trackEvent:(id)a0 withExtraInfo:(id)a1;
- (id)duetAssetClipRange;
- (void)clickedTuningBGView;
- (void)hideEditContainerView:(BOOL)a0;
- (void)showTuningVC;
- (void)karaokeVolumeConfigDidChanged:(id)a0 editProperty:(long long)a1;
- (void).cxx_destruct;

@end
