@class AWEAlertCallbackWrapper, NSString, AWEAlertContext, AWEBindStrategyModel, AWEBindGuideSceneModel, AWEBindGuideTaskModel, DUXContentSheet;

@interface AWEBindGuideStrategyService : HTSService <AWEBindGuideStrategyService, DUXSheetDelegate, AWEUserMessage>

@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isMyTabRedDotShow;
@property (retain, nonatomic) AWEBindStrategyModel *model;
@property (retain, nonatomic) AWEBindGuideTaskModel *shownTaskModel;
@property (retain, nonatomic) AWEBindGuideSceneModel *shownSceneModel;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) AWEAlertCallbackWrapper *callbackWrapper;
@property (retain, nonatomic) AWEAlertContext *alertContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)sheetDidDragToDismiss:(id)a0;
- (id)currentTaskId;
- (void)trackGuideShow;
- (BOOL)shouldShowBindGuideRedDotEnterFrom:(id)a0;
- (BOOL)shouldShowBindGuideEnterFrom:(id)a0;
- (void)showBindGuideIfNeedEnterFrom:(id)a0 context:(id)a1 callbackWrapper:(id)a2;
- (id)bindRedDotDisplayModelWithScene:(long long)a0;
- (id)bindRedDotDefaultModel;
- (id)redDotTypeMap;
- (void)transferToLinkIfNeed:(id)a0 params:(id)a1;
- (void)updateBindRedDotDataCompletion:(id /* block */)a0;
- (void)recordRedDotShow;
- (void)recordRedDotClickScene:(long long)a0;
- (void)readStorageModelIfNeed;
- (void)requestDataIfNeed;
- (void)networkingReachabilityDidChange;
- (void)updateMyTabRedDotShow;
- (BOOL)shouldShowBindGuideEnterFrom:(id)a0 isRedDot:(BOOL)a1;
- (BOOL)baseCheck:(id)a0 uid:(id)a1;
- (void)showBindGuideAfterRequestUid:(id)a0 enterFrom:(id)a1;
- (void)requestDataUid:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldUseBindRedDot;
- (BOOL)IsNowInDayInterval:(long long)a0 lastShowDate:(id)a1;
- (BOOL)hasAlertToShow;
- (BOOL)isRedDotFrequencySatisfiedWithDisplayTotalTimes:(long long)a0 displayInterval:(long long)a1 taskId:(id)a2 uid:(id)a3 configModel:(id)a4;
- (void)canShowUid:(id)a0 enterFrom:(id)a1 isRedDot:(BOOL)a2 completion:(id /* block */)a3;
- (void)logForItem:(id)a0 message:(id)a1 uid:(id)a2 enterFrom:(id)a3;
- (void)showPanelEnterFrom:(id)a0 sceneModel:(id)a1 taskModel:(id)a2 uid:(id)a3;
- (BOOL)needRequestServerUid:(id)a0;
- (void)handleRequestResult:(id)a0 error:(id)a1 uid:(id)a2;
- (id)strategyKeyUid:(id)a0;
- (void)storeRequestResult:(id)a0 uid:(id)a1;
- (void)forceReadStorageModel;
- (BOOL)isFrequencySatisfied:(id)a0 uid:(id)a1 enterFrom:(id)a2;
- (void)leftBtnClicked;
- (void)highLightRightBtnClicked;
- (void)notHighLightRightBtnClicked;
- (void)trackGuideClickType:(id)a0;
- (void)trackForAlertClickType:(unsigned long long)a0;
- (id)sceneToEnterFromMap;
- (void)trackForAlertCloseType:(unsigned long long)a0;
- (void)resetRedDotShow;
- (void).cxx_destruct;
- (void)startup;
- (void)dealloc;

@end
