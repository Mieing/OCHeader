@class ACCMusicReplaceNoVoiceTipView, ACCMusicPanelAudioEditToolBar, ACCVideoEditMusicViewModel, NSString, UIView, ACCMusicPickerViewController, ACCMusicAdvanceEditTipView;
@protocol HTSVideoSoundEffectPanelViewProtocol;

@interface ACCMusicPickerCreationBiz : NSObject <ACCMusicPanelAudioEditToolBarDelegate, HTSVideoSoundEffectPanelViewActionDelegate, ACCMusicAdvanceEditActionDelegate, ACCMusicPickerCreationBizProtocol>

@property (weak, nonatomic) ACCMusicPanelAudioEditToolBar *audioEditToolBar;
@property (weak, nonatomic) UIView<HTSVideoSoundEffectPanelViewProtocol> *volumeView;
@property (weak, nonatomic) ACCMusicPickerViewController *musicPicker;
@property (weak, nonatomic) ACCVideoEditMusicViewModel *musicViewModel;
@property (retain, nonatomic) ACCMusicAdvanceEditTipView *advanceEditTipView;
@property (retain, nonatomic) ACCMusicReplaceNoVoiceTipView *replaceMusicTipView;
@property (copy, nonatomic) id /* block */ didSelectToolBarModelHandler;
@property (copy, nonatomic) id /* block */ advanceEditTipDeleteActionHandler;
@property (copy, nonatomic) id /* block */ advanceEditTipUnselectMusicEventTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackAdvanceEditTipUnselectMusicEventForPreAction:(BOOL)a0;
- (void)handleAdvanceEditTipDeleteAction;
- (void)refreshUIWithTipViewDisplay:(BOOL)a0;
- (void)didSelectToolBarModel:(id)a0;
- (void)willShowPicker;
- (id)initWithMusicPicker:(id)a0 musicViewModel:(id)a1;
- (void)toolbarOriginMusicSelected:(BOOL)a0;
- (void)toggleVolumeViewShow;
- (BOOL)toolbarMusicScoreSelected:(BOOL)a0;
- (void)toolbarBeatsSelected:(BOOL)a0;
- (void)finishEditVolumeTrackWithFromVoiceSlider:(BOOL)a0;
- (id)currentAdvanceEditor;
- (void)showPickerTipIfNeeded;
- (BOOL)shouldShowReplaceMusicNoVoiceTipView;
- (void)volumeViewBackButtonTapped;
- (void)bgmSliderDidFinishSlidingWithValue:(float)a0;
- (void)voiceSliderDidFinishSlidingWithValue:(float)a0;
- (void)toolbarVolumeTapped;
- (void).cxx_destruct;

@end
