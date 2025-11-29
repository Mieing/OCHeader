@class ACCEditAdjustItemModel, ACCAEAdjustServiceImpl, NSString;
@protocol DVEEditingRuntimeProtocol, ACCAdvanceEditViewModelProtocol, DVEPlayerServiceProtocol;

@interface ACCAEAdjustComponent : ACCAdvanceEditComponent <ACCEditAdjustPanelDelegate, ACCEditAdjustPanelDataSource, AWESliderDelegate>

@property (retain, nonatomic) ACCAEAdjustServiceImpl *service;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (retain, nonatomic) ACCEditAdjustItemModel *curAdjustItem;
@property (retain, nonatomic) ACCEditAdjustItemModel *downloadingAdjust;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> editViewModel;
@property (nonatomic) long long currentSliderValue;
@property (nonatomic) long long sliderStartValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)slider:(id)a0 valueDidChanged:(float)a1;
- (void)sliderWillStartSliding:(id)a0;
- (void)slider:(id)a0 didFinishSlidingWithValue:(float)a1;
- (id)videoEditor;
- (id)filterEditor;
- (void)componentDidMount;
- (id)serviceBinding;
- (void)mainVideoClipChanged;
- (id)currentVideoClipMaterial;
- (void)updateSliderWithAdjustItem:(id)a0;
- (void)applyAdjust:(id)a0 intensity:(double)a1;
- (void)applyDefaultIntensityIfNeededWithAdjustItem:(id)a0;
- (id)trackIsSegmentEdit;
- (void)fetchItemsWithCompletion:(id /* block */)a0;
- (void)willShowAdjustPanel;
- (void)didClickAdjustItem:(id)a0;
- (void)compareBtnTouchDown;
- (void)compareBtnTouchUp;
- (void)bottomActionClick;
- (void)selectTabDidChange;
- (id)firstFilterOnCurrentVideoClip;
- (void).cxx_destruct;

@end
