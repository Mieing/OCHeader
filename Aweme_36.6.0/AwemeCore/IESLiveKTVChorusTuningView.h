@class UIView, IESLiveKTVMixActionControlBar, NSString, IESLiveKTVTuningEffectView, IESLiveNewKTVVolumeSliderViewDH, IESLiveSegmentedControl, IESSoloKTVTuningSwitchView, IESLiveKTVTuningStore, UILabel, IESLiveKTVControlStore;
@protocol IESLiveKTVControlActions;

@interface IESLiveKTVChorusTuningView : UIView <IESLiveKTVTuningViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveSegmentedControl *segControl;
@property (retain, nonatomic) UIView *line1;
@property (retain, nonatomic) UIView *line2;
@property (retain, nonatomic) IESSoloKTVTuningSwitchView *originSwitch;
@property (retain, nonatomic) IESSoloKTVTuningSwitchView *earSwitch;
@property (retain, nonatomic) IESLiveNewKTVVolumeSliderViewDH *myVoiceSlider;
@property (retain, nonatomic) IESLiveNewKTVVolumeSliderViewDH *myEarSlider;
@property (retain, nonatomic) IESLiveNewKTVVolumeSliderViewDH *othersVoiceSlider;
@property (retain, nonatomic) IESLiveNewKTVVolumeSliderViewDH *musicSlider;
@property (retain, nonatomic) IESLiveKTVTuningEffectView *tuningEffectView;
@property (retain, nonatomic) IESSoloKTVTuningSwitchView *cellularSwitch;
@property (retain, nonatomic) IESLiveKTVMixActionControlBar *controlBar;
@property (retain, nonatomic) IESLiveKTVTuningStore *tuningStore;
@property (retain, nonatomic) IESLiveKTVControlStore *controlStore;
@property (retain, nonatomic) id<IESLiveKTVControlActions> controlActionsCreator;
@property (nonatomic) BOOL isUseOriginal;
@property (nonatomic) int voiceVolumePercentOrigin;
@property (nonatomic) int musicVolumeOrigin;
@property (nonatomic) int othersVolumeOrigin;
@property (nonatomic) BOOL disableEarMonitoring;
@property (nonatomic) BOOL allMemberTuningEnabled;
@property (nonatomic) BOOL canAllMemberTune;
@property (nonatomic) BOOL disableSwitchOriginFeature;
@property (copy, nonatomic) id /* block */ cutSongAction;
@property (copy, nonatomic) id /* block */ clickedBackAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

- (void)initView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 store:(id)a1;
- (void)audioSessionRouteChangeNotification:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tuningStore:(id)a1 controlStore:(id)a2;
- (void)updateNeedCellularSwitch:(BOOL)a0;
- (void)hideControlBar:(BOOL)a0;
- (void)updateNeedOthersVolume:(BOOL)a0;
- (void)hidePlayControl:(BOOL)a0;
- (void)hideBGMSlider:(BOOL)a0;
- (void)updateDisableSwitchOriginFeature:(BOOL)a0;
- (void)updateDisableEffectFeature:(BOOL)a0;
- (void)hideOriginSwitchUI;
- (void)freshViews;
- (void)tr_pushKsongTuneValue;
- (void)updateSelfCorner;
- (void)updateUIWithAllMemberTuningEnable:(BOOL)a0;
- (void)trackOriginalClick:(BOOL)a0;
- (void)resetMyVoiceSliderValue;
- (void)didHideTunningView;
- (void)updateDisableEarMonitoring:(BOOL)a0;
- (void)enableAllMemberTuning:(BOOL)a0 canTune:(BOOL)a1;
- (void)resetMyEarSliderValue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObservers;

@end
