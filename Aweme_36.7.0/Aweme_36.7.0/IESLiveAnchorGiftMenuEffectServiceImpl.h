@class IESLiveFaceEffectView, NSString, NSTimer, IESLiveEffectPreviewHandler, IESEffectModel, NSMutableArray, IESLiveEffectPanelIndexInfo;
@protocol IESLiveEffectPlatformService;

@interface IESLiveAnchorGiftMenuEffectServiceImpl : IESLiveGeneralBaseService <IESLiveFaceEffectViewDelegate, IESLiveAnchorGiftMenuEffectService>

@property (retain, nonatomic) id<IESLiveEffectPlatformService> effectPlatformService;
@property (retain, nonatomic) NSMutableArray *categoryList;
@property (retain, nonatomic) IESLiveFaceEffectView *faceEffectView;
@property (retain, nonatomic) IESLiveEffectPreviewHandler *previewHandler;
@property (retain, nonatomic) IESEffectModel *currentSelectedEffect;
@property (retain, nonatomic) IESEffectModel *currentPreviewEffect;
@property (retain, nonatomic) IESEffectModel *currentRenderEffect;
@property (retain, nonatomic) NSString *currentRenderEffectId;
@property (retain, nonatomic) NSTimer *effectRenderTimer;
@property (copy, nonatomic) id /* block */ selectionBlock;
@property (nonatomic) BOOL eventChannelEnable;
@property (retain, nonatomic) NSMutableArray *giftEventArray;
@property (retain, nonatomic) NSTimer *eventLoopTimer;
@property (nonatomic) double eventLoopInterval;
@property (retain, nonatomic) IESLiveEffectPanelIndexInfo *currentEffectIndexInfo;
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
- (void)serviceDidReBind;
- (void)stopRenderTimer;
- (BOOL)isEffectFavor:(id)a0;
- (long long)indexForFavorCategory;
- (id)buttonModelList;
- (id)previewEffect;
- (id)effectModelOfIndexPath:(id)a0 secondaryIndex:(long long)a1;
- (id)faceEffectCategoryList;
- (void)doSelectEffect:(id)a0;
- (void)recordToolUsageWith:(id)a0 use:(BOOL)a1;
- (void)didSelectEffectAtIndexPath:(id)a0 secondaryIndex:(long long)a1;
- (id)aigcBgGenerateSelectedKeyword;
- (void)onEffectListLoadingFor:(id)a0 indexPath:(id)a1 secondaryIndex:(long long)a2 completion:(id /* block */)a3;
- (void)onEffectDownloadAtIndexPath:(id)a0 secondaryIndex:(long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)didSearchTextChanged:(id)a0 completion:(id /* block */)a1;
- (void)onRemoveEffectBtnTapped;
- (void)didSelectCategoryAtIndex:(long long)a0;
- (void)didTappedItemAtIndexPath:(id)a0 secondaryIndex:(long long)a1;
- (void)didSelectSearchHashTag:(id)a0;
- (void)onEffectWillDisplayAtIndexPath:(id)a0 secondaryIndex:(long long)a1;
- (BOOL)isEffectForbiddenAtIndexPath:(id)a0 secondaryIndex:(long long)a1;
- (void)didTappedFavorButton:(BOOL)a0 completion:(id /* block */)a1;
- (id)getEffectRenderView;
- (void)didHidePreviewView;
- (id)aigcBgprogressTaskResultTip;
- (void)aigcBgGenerateButtonDidClick:(id)a0 keyword:(id)a1;
- (void)aigcBgReSelectBtnClicked:(id)a0;
- (void)aigcBgGenerateConfirmBtnClicked;
- (void)receiveGiftMsgEnd:(id)a0;
- (void)openEffectPanelAtTab:(id)a0 effectID:(id)a1 shouldScrollToEffect:(BOOL)a2 shouldSelectEffect:(BOOL)a3 selectCompletion:(id /* block */)a4;
- (void)updateGiftMenuEffect:(id)a0 isApplied:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateNotifyGiftMessageChannelStatus:(BOOL)a0;
- (void)showEffectView;
- (void)loadEffectsIfNeedWithCompletion:(id /* block */)a0;
- (void)reportGiftMenuEffectUpdate:(BOOL)a0 effectId:(id)a1 error:(id)a2;
- (void)startRenderTimer;
- (void)sendGiftJSEvent;
- (void)updateEffectToFavorCategory:(id)a0 favor:(BOOL)a1;
- (void)configFavorCategory;
- (void)fetchFavorEffects:(id)a0;
- (void)hideEffectView;
- (void)executeSelectionBlock;
- (void).cxx_destruct;
- (id)currentEffect;
- (id)searchModel;

@end
