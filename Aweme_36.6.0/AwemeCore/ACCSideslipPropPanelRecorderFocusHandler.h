@class ACCThrottle, NSString, AWEVideoPublishViewModel;
@protocol ACCPropPickerService, ACCSideslipPropPanelListDataProvider, ACCSideslipPropInternalService, ACCSideslipPropPanelPreloadService, ACCSideslipPropPanelTrackerService, ACCRecordPropService, ACCSideslipPropPanelPluginLifeCycleService, ACCSideslipPropPanelService, ACCSideslipPropService, ACCRecordSwitchModeService, ACCRecordPropRankService, IESServiceProvider;

@interface ACCSideslipPropPanelRecorderFocusHandler : NSObject <ACCStickerPickerServiceSubscriber, ACCSideslipPropPanelFocusHandleService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropInternalService> sideslipPropInternalService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (weak, nonatomic) id<ACCSideslipPropPanelPreloadService> sideslipPropPreloadService;
@property (weak, nonatomic) id<ACCSideslipPropPanelListDataProvider> listDataProvider;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCPropPickerService> propPickerService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCSideslipPropPanelPluginLifeCycleService> pluginLifeCycleService;
@property (weak, nonatomic) id<ACCRecordPropRankService> newPropRankerService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) ACCThrottle *applyWhileSlidingThrottle;
@property (nonatomic) BOOL hasApplyPropFailed;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) double timeScrollStarted;
@property (nonatomic) unsigned long long applyCountWhileScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stickerPickerService;
- (void)handleCancelPickedPropIfNeeded;
- (void)p_bindService;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)handleItemPickedIsScrollByUserDrag:(BOOL)a0;
- (void)handleWillScroll;
- (void)handleDidEndScroll;
- (void)handleWillBeginScrollByUserDrag;
- (void)handleDidEndScrollByUserDrag;
- (void)relocateApplyPropIfNeeded;
- (void)handleItemPickedForPreload:(id)a0;
- (void)stickerPickerServiceDidSelectNewSticker:(id)a0 oldSticker:(id)a1;
- (void)stickerPickerService:(id)a0 didFinishDownloadSticker:(id)a1;
- (id)p_applyReason;
- (void)p_handlePickedPropApplyIfNeededByUserDrag:(BOOL)a0;
- (void)setupPreloadEffect;
- (void)p_initApplyGapIfNeeded;
- (void)p_handleCancelPickedPropIfNeeded;
- (void)p_handleDiscoverPicked;
- (void)p_handlePickRearLoadPropIfNeeded;
- (void)p_handlePickPropIfNeeded:(BOOL)a0;
- (void)p_relocateApplyPropIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
