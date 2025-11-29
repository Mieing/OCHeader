@class NSString, DVEDoneInfo, NLETrackSlot_OC, DVELabelSliderCombinationView;

@interface DVEAudioFadeInOutBarController : DVEBaseBarController <DVEBaseBarTopViewDelegate, DVEBaseBarBottomViewDelegate, DVECoreActionDelegate>

@property (nonatomic) BOOL isValueChanged;
@property (retain, nonatomic) DVELabelSliderCombinationView *fadeInSliderView;
@property (retain, nonatomic) DVELabelSliderCombinationView *fadeOutSliderView;
@property (weak, nonatomic) NLETrackSlot_OC *curSlot;
@property (nonatomic) float value;
@property (retain, nonatomic) DVEDoneInfo *doneInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dismissWithType:(unsigned long long)a0;
- (void)nleEditorDidChange;
- (void)saveEdit:(id /* block */)a0;
- (void)buildLayout;
- (void)p_updateFadeInOutSlider;
- (void)sliderTouchUpinside:(id)a0;
- (id)p_createFadeSliderView;
- (void)p_updateAudioExtraForSlot:(id)a0;
- (void)sliderValueChanged:(id)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (void)viewDidLoad;
- (double)viewHeight;
- (void)initData;

@end
