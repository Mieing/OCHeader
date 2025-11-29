@class MMFinderLiveStickerTextTemplateResourceRepository, NSMutableDictionary, NSString, MMFinderLiveTaskId, MMFinderLiveStickerItemBase, NSMutableSet, NSMutableArray;

@interface MMFinderLiveStickerLogic : NSObject <MMFinderLiveStickerEditingViewControllerDelegate, MMFinderLiveStickerEditingActivatorContainerViewDelegate, MMLiveTaskMgrExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveStickerItemBase *imageSticker;
@property (retain, nonatomic) MMFinderLiveStickerItemBase *textSticker;
@property (retain, nonatomic) MMFinderLiveStickerItemBase *bottomMostSticker;
@property (retain, nonatomic) NSMutableDictionary *pendingReviewSubmissionItems;
@property (retain, nonatomic) NSMutableSet *pendingReviewRemovalItems;
@property (nonatomic) BOOL reviewSubmissionOngoing;
@property (retain, nonatomic) NSMutableArray *editingActivatorContainerViewItems;
@property (retain, nonatomic) MMFinderLiveStickerTextTemplateResourceRepository *textTemplateResources;
@property (nonatomic) unsigned long long preemptions;
@property (nonatomic) BOOL stickerEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)showStickerActionSheetWithEditVcPresentingViewController:(id)a0 actionSheetHostingView:(id)a1 reporter:(id)a2 completionBlock:(id /* block */)a3;
- (void)showStickerActionSheetForStickerType:(unsigned long long)a0 withEditVcPresentingViewController:(id)a1 actionSheetHostingView:(id)a2 reporter:(id)a3 completionBlock:(id /* block */)a4;
- (void)loadPersistentStickers;
- (void)clearPersistentStickers;
- (void)submitExistingStickersForReview;
- (void)updateStickerEnablementSwitches;
- (void)removeStickerWithSubmissionId:(id)a0;
- (id)createEditingActivatorContainerViewWithEditVcPresentingViewController:(id)a0 actionSheetHostingView:(id)a1 reporter:(id)a2;
- (void)beginOrientationChange;
- (void)endOrientationChange;
- (void)reFitPersistStickersInCurrOrientation;
- (void)updateTextTemplateResourcesWithBackendEntitiesForTextTemplates:(id)a0 templateFonts:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })onLiveStickerEditingViewController:(id)a0 requestingCanvasFrameInCoordinateSpace:(id)a1;
- (void)onLiveStickerEditingViewController:(id)a0 addingOrChangingSticker:(id)a1;
- (void)handleForStickerItemUpdated:(id)a0 archiveUponFinish:(BOOL)a1;
- (void)onLiveStickerEditingViewController:(id)a0 removingSticker:(id)a1;
- (void)onLiveStickerEditingViewController:(id)a0 cancelingWithOriginalSticker:(id)a1;
- (void)onStickerEditingActivatorViewTappedForStickerItem:(id)a0 inContainerView:(id)a1;
- (void)onStickerEditingActivatorViewDoubleTappedForStickerItem:(id)a0 inContainerView:(id)a1;
- (void)onLiveTask:(id)a0 micUsersInfoChanged:(id)a1;
- (void)onLiveTask:(id)a0 applyingOrConnectingMicWithOtherAnchorChanged:(BOOL)a1;
- (void)onLiveTask:(id)a0 didChangeViewCapturing:(BOOL)a1;
- (id)liveTask;
- (void)removeSticker:(id)a0;
- (BOOL)inLive;
- (void)navigateToEditPageForStickerType:(unsigned long long)a0 configuration:(id)a1 fromViewController:(id)a2 reporter:(id)a3;
- (void)openStickerEditingVC:(id)a0 fromViewController:(id)a1;
- (void)addStickerToComposition:(id)a0;
- (void)removeStickerFromComposition:(id)a0;
- (void)sendStickerToBackInComposition:(id)a0;
- (void)submitPendingStickersForReview;
- (void)submitPendingStickersForRemoval:(id)a0 failedSubmissionCount:(unsigned long long)a1;
- (void)addStickerToTransmitComposition:(id)a0;
- (void)removeStickerFromTransmitComposition:(id)a0;
- (void)removeStickterItemFromAllCompositions:(id)a0;
- (void)persistStickerItem:(id)a0;
- (id)reFitStickerItemRenderParam:(id)a0 forLive:(id)a1 inOrientation:(long long)a2;
- (void)pauseStickerComposition;
- (void)restoreStickerComposition;
- (void)updatePreemptions;
- (void)showToastMessageForCurrentPreemptions;
- (void).cxx_destruct;

@end
