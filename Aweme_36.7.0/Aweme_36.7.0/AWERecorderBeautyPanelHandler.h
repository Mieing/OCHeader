@class ACCBeautifulEffectPanelComponentAlertWorker, NSString, NSDictionary, NSMutableDictionary, AWEVideoPublishViewModel, AWERecorderBeautyServiceImpl, AWEBeautyVCContext;

@interface AWERecorderBeautyPanelHandler : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) AWEBeautyVCContext *beautyEffectContext;
@property (copy, nonatomic) NSString *styleNodeId;
@property (retain, nonatomic) NSDictionary *styleExtraCellModelsNodeIdInfo;
@property (retain, nonatomic) NSMutableDictionary *styleSliderValueInfo;
@property (retain, nonatomic) ACCBeautifulEffectPanelComponentAlertWorker *alertWorker;
@property (retain, nonatomic) AWERecorderBeautyServiceImpl *beautyService;

- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (void)updateStyleMoreItemApplyStatus:(id)a0;
- (BOOL)hasOriginStyleStatus;
- (void)resetStyleNodePropertyStatus;
- (void)scrollItemIfNeeded;
- (void)p_saveCache;
- (void)configWithRepository:(id)a0 beautyEffectContext:(id)a1 beautyService:(id)a2;
- (void)setupStyleNodeIfNeeded;
- (void)recordPageBeautyEffectResetStyleEffectItemAction:(id)a0;
- (void)recordPageBeautyEffectClickTurnOffBeautyNodeItemAction;
- (void)recordPageBeautyEffectSelectLeafNodeItemAction:(id)a0;
- (void)recordPageBeautyEffectClickItemCollectionAction:(id)a0;
- (void)recordPageBeautyEffectSelectStyleEffectItemAction:(id)a0 styleExtraCellModelsNodeIdInfo:(id)a1 completeHandler:(id /* block */)a2;
- (void)recordPageBeautyEffectSelectStyleMoreItemAction:(id)a0;
- (void)recordPageBeautyNavigationControllerDidTapBackAction;
- (void)recordPageBeautyEffectTrackItemAction:(id)a0;
- (void)recordPageBeautyEffectSliderDidStartAction:(id)a0 completeHandler:(id /* block */)a1;
- (void)recordPageBeautyEffectSliderValueDidChangeAction:(id)a0 value:(long long)a1;
- (void)recordPageBeautyEffectSliderValueFinishChangeAction:(id)a0 value:(long long)a1;
- (void)recordPageBeautyEffectTapResetAction:(id)a0 resetTitle:(id)a1;
- (void)recordPageBeautyEffectCheckAvailabilitiesAction;
- (void)prepareForFirstItemShowSliderIfNeeded;
- (void)prepareForContainsStyleNodeStatus;
- (BOOL)hasContainsStyleNodeStatus;
- (void)resetStyleItemSelectAndAppliedStatusWithNodeId:(id)a0;
- (void)recoverUserLastDefineEffect;
- (void)trackerItemWithNodeId:(id)a0;
- (void)recordPageBeautyEffectSelectStyleEffectSelfItemActionWithNodeId:(id)a0 completeHandler:(id /* block */)a1;
- (void)cacheUserLastDefineEffect;
- (long long)styleItemRealValueWithNodeId:(id)a0;
- (id)subItemCurrentValueInfoWithSelectItems:(id)a0;
- (void)resetAllItemRealValueToNoEffect;
- (id)updateSelectItemsBySubItemNotConfigToSelectNoneItem:(id)a0;
- (void)sliderWithStyleEffectValueDidChange:(long long)a0 realValue:(long long)a1 itemModel:(id)a2;
- (void)prepareForStyleItemSelectStatusIfNeeded;
- (void).cxx_destruct;
- (BOOL)isValidIndexPath:(id)a0;
- (id)dataManager;

@end
