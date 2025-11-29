@class DVEPickerView, NLESegmentTransition_OC, DVETransitionPanelViewModel, NSString, DVELabelSliderCombinationView, UIView, DVETransitionEffectBundleViewModel;
@protocol DVECoreTransitionProtocol, DVENLEEditorProtocol, DVEPlayerServiceProtocol, DVEVideoTimeRangeChangeDelegate;

@interface DVETransitionBarController : DVEBaseBarController <DVEPickerViewDelegate, DVEBaseBarTopViewDelegate, DVEBaseBarBottomViewDelegate, DVETransitionPanelContextProtocol, DVETransitionPanelTrackDelegate, DVETransitionEffectBundleContextProtocol, DVETransitionEffectBundleTrackDelegate>

@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (retain, nonatomic) UIView *sliderPanel;
@property (retain, nonatomic) DVELabelSliderCombinationView *combinationView;
@property (retain, nonatomic) DVEPickerView *animationPickerView;
@property (nonatomic) BOOL isValueChanged;
@property (retain, nonatomic) NLESegmentTransition_OC *lastTransition;
@property (weak, nonatomic) id<DVECoreTransitionProtocol> transitionEditor;
@property (weak, nonatomic) id<DVENLEEditorProtocol> nleEditorService;
@property (retain, nonatomic) DVETransitionEffectBundleViewModel *bundleViewModel;
@property (retain, nonatomic) DVETransitionPanelViewModel *viewModel;
@property (weak, nonatomic) id<DVEVideoTimeRangeChangeDelegate> delegate;
@property (nonatomic) BOOL enablePreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView;
- (BOOL)dismissWithType:(unsigned long long)a0;
- (void)downloadEffectModel:(id)a0 completion:(id /* block */)a1;
- (void)setEditingSlot:(id)a0;
- (id)initWithVcContext:(id)a0 preloadTransitionEffectViewModel:(id)a1;
- (void)saveEdit:(id /* block */)a0;
- (BOOL)isSupportAudioEdit;
- (void)trackDuration:(double)a0 event:(id)a1;
- (void)topView:(id)a0 didClickCancelButton:(id)a1 resetHeadCompletion:(id /* block */)a2;
- (void)didClickedApplyToAllView:(id)a0;
- (void)reloadMainPanel;
- (void)pickerViewDidClearSticker:(id)a0;
- (void)pickerView:(id)a0 didSelectTabIndex:(long long)a1;
- (BOOL)pickerView:(id)a0 isSelected:(id)a1;
- (void)pickerView:(id)a0 didSelectSticker:(id)a1 category:(id)a2 indexPath:(id)a3;
- (void)initSlider;
- (void)updateTransitionDuration;
- (id /* block */)playTransitionBlock;
- (void)addTransitionWithCurDuration:(double)a0 slot:(id)a1 value:(id)a2 completion:(id /* block */)a3;
- (void)addTransitionWithCurDuration:(double)a0 slot:(id)a1 value:(id)a2;
- (void)initSelectTransition;
- (void)playTransition;
- (void)updateSelectedItemModel:(id)a0;
- (void)dataModelReady:(id)a0;
- (void)effectModelDownloadSuccess:(id)a0 tabModel:(id)a1;
- (void)effectModelDownloadFail:(id)a0 tabModel:(id)a1;
- (void)selectEffectModel:(id)a0 tabModel:(id)a1;
- (void)trackClickTransitionBarItem:(id)a0 tabModel:(id)a1 isAuto:(BOOL)a2;
- (void)trackClickTransitionBarTab:(id)a0 isAuto:(BOOL)a1;
- (void)trackDownloadTransitionEffectItemWithStartTime:(double)a0 tabModel:(id)a1 itemModel:(id)a2 extraInfo:(id)a3;
- (id)downloadBundleSuccessWithData:(id)a0 extraInfo:(id)a1;
- (void)downloadBundleFailWithExtraInfo:(id)a0;
- (void)trackLoadTransitionEffectListWithStartTime:(double)a0 extraInfo:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)viewHeight;
- (void)initData;

@end
