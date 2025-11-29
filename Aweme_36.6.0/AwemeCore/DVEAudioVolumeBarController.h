@class UIView, NSString, DVEDoneInfo, NLETrackSlot_OC, DVELabelSliderCombinationView;
@protocol DVEToastProtocol, DVEAudioVolumeBarControllerDelegate;

@interface DVEAudioVolumeBarController : DVEBaseBarController <DVEBaseBarTopViewDelegate, DVEBaseBarBottomViewDelegate>

@property (nonatomic) BOOL isValueChanged;
@property (retain, nonatomic) DVELabelSliderCombinationView *volumeSliderView;
@property (weak, nonatomic) NLETrackSlot_OC *curSlot;
@property (nonatomic) float value;
@property (retain, nonatomic) DVEDoneInfo *doneInfo;
@property (weak, nonatomic) id<DVEToastProtocol> toast;
@property (retain, nonatomic) UIView *maskView;
@property (weak, nonatomic) id<DVEAudioVolumeBarControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dismissWithType:(unsigned long long)a0;
- (void)saveEdit:(id /* block */)a0;
- (void)topView:(id)a0 didClickCancelButton:(id)a1 resetHeadCompletion:(id /* block */)a2;
- (void)topView:(id)a0 didClickApplyButton:(id)a1;
- (void)buildLayout;
- (void)updateSliderValue:(double)a0;
- (void)didClickedApplyToAllView:(id)a0;
- (void)commitSlotChange:(id)a0;
- (void)handleTapForImage:(id)a0;
- (void)handlePanForImage:(id)a0;
- (id)bottomViewApplyToAllLabelString;
- (id)topTitleLabelString;
- (id)configDoneInfo;
- (void)sliderValueChanged:(id)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (void)viewDidLoad;
- (double)viewHeight;
- (void)initData;

@end
