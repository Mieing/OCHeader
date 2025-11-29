@class AWEAwemeModel;

@interface AWEKnowledgeRichContentImpl.FullPageFeedSectionController : AWEKnowledgeSwiftBasic.FullPageBaseSectionController <AWEKnowledgeSwiftBasic.FullPageContainerSectionControllerProtocol, AWEPlayVideoViewControllerContainerProtocol, AWEPlayVideoDelegate, AFDPureModePageOuterContextProvider, AFDPureModePagePinchTransitionDelegate, AFDPureModePageExitTransitionDelegate, AFDPureModePageEventTrackerProtocol, AWEFullPageFeedOuterContextProviderProtocol, AFDAlbumMusicBeatsDelegate, AWEKnowledgeAudioControlProtocol, AWELongPressPanelPlayerContextProtocol> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ eventDelegate;
    void /* unknown type, empty encoding */ audioController;
    void /* unknown type, empty encoding */ preSpeed;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cardInfo;
}

@property (nonatomic, retain) AWEAwemeModel *model;

+ (Class)sectionViewModelClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (id)richContentContainer;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (id)awe_preferredTransitionProviderClassNameForContext:(id)a0;
- (void)inner_pinchTransitionDidFinish;
- (id)pinchTransitionBackgroundColor;
- (void)sectionControllerWillDisplay;
- (void)sectionControllerDidEndDisplaying;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (id)pinch_pinchZoomEventParamsWithModel:(id)a0 isEnterPinchView:(BOOL)a1 isPinchTransition:(BOOL)a2;
- (id)pinch_pinchViewDurationEventParamsWithModel:(id)a0;
- (void)pinch_updateOutContainerWithPureModeVC:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pinch_getOutContainerFrame;
- (id)pinch_getTransitionForegroundView;
- (void)pinch_updateTransitionForegroundView:(id)a0;
- (id)pinch_getAlbumContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pinch_getOutTargetFrameForStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withInnerAlbumContainer:(id)a1;
- (void)pinch_exitAnimateWithPinchTargetView:(id)a0 updateAnimator:(id)a1;
- (void)inner_pinchTransitionWillBegin;
- (void)inner_pinchTransitionDidCancel;
- (void)outer_pinchTransitionWillBegin;
- (void)outer_pinchTransitionDidFinish;
- (void)outer_pinchTransitionDidCancel;
- (id)pinchTransitionDelegate;
- (id)pinchTransitionBackgroundView;
- (BOOL)pinchTransitionNeedPreSink;
- (double)getCurrentPlaybackTime;
- (id)getItemControllerWithIdentifier:(id)a0;
- (BOOL)isItemCellVisibleWithIdentifier:(id)a0;
- (id)relatedViewControllerForPrefetch;
- (id)pinch_getTargetViewForContainerView:(id)a0;
- (void)pinch_startAnimationWithPinchTargetView:(id)a0 updateAnimator:(id)a1;
- (void)pinch_recoverFromContainerWithPureModeVC:(id)a0;
- (void)pinch_moveTargetView:(id)a0 updateAnimator:(id)a1;
- (void)pinch_updateToContainerWithPureModeVC:(id)a0;
- (id)pinch_createUpdateAnimatorWithType:(unsigned long long)a0;
- (double)currentPlayTimeOfRichAwemeFullPage;
- (unsigned long long)playerMutedStyleOfRichAwemeFullPage;
- (double)getCurrentPlaybackRate;
- (void)changeSpeedModeClick:(double)a0;
- (void)longPressSpeedControlDidChangeSpeed:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void).cxx_destruct;
- (void)setMuted:(BOOL)a0;
- (id)init;
- (id)sectionBackgroundColor;
- (void)dealloc;

@end
