@class NSString, HTSLiveToolbarItem, IESLiveSoundEffectPickerView, IESLiveSoundEffectAnimationView, NSTimer, IESLiveSoundEffectStore;
@protocol IESLiveEffectProcessService;

@interface IESLiveSoundEffectFragment : IESLiveRoomComponent <IESLiveSoundEffectStoreReaction, IESLiveSoundEffectViewReaction, IESLiveSoundEffectRouter>

@property (retain, nonatomic) IESLiveSoundEffectPickerView *pickerView;
@property (weak, nonatomic) HTSLiveToolbarItem *soundItem;
@property (retain, nonatomic) IESLiveSoundEffectAnimationView *longPressView;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly, nonatomic) BOOL isAppliedSound;
@property (retain, nonatomic) NSString *disableEntanceReason;
@property (nonatomic) unsigned long long minitTickTimes;
@property (retain, nonatomic) IESLiveSoundEffectStore *store;
@property (retain, nonatomic) id<IESLiveEffectProcessService> audioEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)didSelectModel:(id)a0;
- (BOOL)isSoundEffectApplied;
- (void)pauseCurrentSoundEffect:(BOOL)a0;
- (void)disableSoundEffectEntrance:(id)a0;
- (void)enableSoundEffectEntrance;
- (void)loadSoundEffectItem;
- (void)showGuideTipIfNeeded;
- (void)trackSelectSoundItem;
- (void)showSoundEffectPicker;
- (void)showTipOnToolbarItem:(id)a0;
- (void)updateItemAppliedStatus:(BOOL)a0;
- (void)trackModelShow:(id)a0;
- (void)trackSelectModel:(id)a0;
- (void)trackLongPressModel:(id)a0;
- (void)trackModelDownloaded:(id)a0 spendTime:(double)a1;
- (void)trackApplied30s:(id)a0;
- (void)trackAppliedDuration:(id)a0 duration:(unsigned long long)a1;
- (void)soundEffectListDidDownloaded:(id)a0;
- (void)updatePreSoundEffectWhenResume:(id)a0;
- (void)willDisplayModel:(id)a0;
- (void)didDownloadModel:(id)a0 withTime:(double)a1;
- (void)longPressEnable:(BOOL)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (void)dealloc;

@end
