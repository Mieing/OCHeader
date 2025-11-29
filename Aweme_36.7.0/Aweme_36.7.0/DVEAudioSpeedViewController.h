@class DVEAudioSpeedSliderView, NSArray, NSMutableDictionary, DVEDoneInfo, UIView, NSString;
@protocol DVEToastProtocol, DVEMulitpleTrackViewServiceProtocol, DVENLEEditorProtocol, DVEVideoTimeRangeChangeDelegate;

@interface DVEAudioSpeedViewController : DVEBaseBarController <DVEBaseBarTopViewDelegate, DVEBaseBarBottomViewDelegate, DVEBaseTooltipSliderDelegate>

@property (nonatomic) BOOL isValueChanged;
@property (readonly, nonatomic) BOOL isRewind;
@property (retain, nonatomic) DVEAudioSpeedSliderView *sliderView;
@property (retain, nonatomic) NSArray *originalSlots;
@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multipleTrackViewService;
@property (weak, nonatomic) id<DVEToastProtocol> toast;
@property (weak, nonatomic) id<DVENLEEditorProtocol> nleEditorService;
@property (retain, nonatomic) DVEDoneInfo *doneInfo;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) NSMutableDictionary *videoInitSpeedMap;
@property (weak, nonatomic) id<DVEVideoTimeRangeChangeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dismissWithType:(unsigned long long)a0;
- (void)saveEdit:(id /* block */)a0;
- (void)topView:(id)a0 didClickCancelButton:(id)a1 resetHeadCompletion:(id /* block */)a2;
- (void)topView:(id)a0 didClickApplyButton:(id)a1;
- (void)didClickedApplyToAllView:(id)a0;
- (void)updateSliderValueWithRatio:(float)a0;
- (void)commitSlotChange:(id)a0;
- (void)handleTapForImage:(id)a0;
- (void)handlePanForImage:(id)a0;
- (id)bottomViewApplyToAllLabelString;
- (BOOL)didHasVideoSpeedChange;
- (float)convertToSpeedValue:(float)a0;
- (BOOL)isSlotsArrayA:(id)a0 equalToSlotsArrayB:(id)a1;
- (float)convertToSliderValue:(float)a0;
- (id)covertSliderTextWith:(id)a0;
- (void)initSet;
- (void)sliderValueChanged:(id)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (void)viewDidLoad;
- (void)setupUI;
- (double)viewHeight;
- (void)initData;

@end
