@class IESLiveBeautyResourceFetcher, NSArray, NSString, IESLiveAnchorCameraMovementPanelView, IESLiveFaceBeautyHelper;

@interface IESLiveAnchorCameraMovementServiceImpl : IESLiveGeneralBaseService <IESLiveAnchorCameraMovementViewDataSource, IESLiveAnchorCameraMovementViewDelegate, IESLiveEffectConflictStatusHandle, IESLiveAnchorEffectBaseEvent, IESLiveAnchorCameraMovementService>

@property (nonatomic) BOOL isFetching;
@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) IESLiveAnchorCameraMovementPanelView *panelView;
@property (nonatomic) BOOL isProhibited;
@property (retain, nonatomic) IESLiveFaceBeautyHelper *beautyHelper;
@property (nonatomic) long long activeSelectIndex;
@property (nonatomic) long long passiveSelectIndex;
@property (nonatomic) long long willSelectIndex;
@property (nonatomic) long long currentSelectIndex;
@property (retain, nonatomic) IESLiveBeautyResourceFetcher *fetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)fetchCameraMovementResources;
- (id)cameraMovementPanelView;
- (void)applyCameraMovementPassive:(id)a0 params:(id)a1;
- (void)removeCameraMovementPassive:(id)a0;
- (void)reportItemUsedIfNeeded;
- (void)useLastSelectedCameraMovement;
- (void)panelViewDidTapClearButton:(id)a0;
- (id)dataForView:(id)a0;
- (void)panelView:(id)a0 didSelectItem:(id)a1 atIndex:(long long)a2;
- (void)panelView:(id)a0 willDispalyItem:(id)a1 atIndex:(long long)a2;
- (void)onEffectRenderWithEffect:(id)a0 item:(id)a1 extra:(id)a2;
- (void)onEffectRemoveWithEffect:(id)a0 item:(id)a1 extra:(id)a2;
- (void)fetchCameraMovementEffectItems:(id /* block */)a0;
- (void)updatePanelViewSliderView:(id)a0 item:(id)a1;
- (void)selectAndApplyItem:(id)a0 atIndex:(long long)a1 inView:(id)a2 autoApply:(BOOL)a3 activeApply:(BOOL)a4;
- (void)parseCameraMovementExtra:(id)a0 toItem:(id)a1;
- (void)configMemoryEffectiveValue:(id)a0;
- (id)parseExtraItems:(id)a0 mainItem:(id)a1;
- (id)key_memoryTag:(id)a0;
- (void)updatePanelView:(id)a0 index:(long long)a1 item:(id)a2 apply:(BOOL)a3;
- (void)removeCameraMovementEffectItem:(id)a0;
- (void)applyCameraMovementEffectItem:(id)a0;
- (void)monitorCameraMovementOperative:(id)a0 autoApply:(BOOL)a1 activeApply:(BOOL)a2;
- (void)updateEffectiveItemAndPanelView:(id)a0 selectedIndex:(long long)a1 selectItem:(id)a2;
- (void)memorySelectedCameraMovement:(id)a0;
- (void)handleEffectConflictStatus:(long long)a0 scene:(long long)a1;
- (void).cxx_destruct;

@end
