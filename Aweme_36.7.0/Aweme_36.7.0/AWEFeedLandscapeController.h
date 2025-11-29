@class NSArray, NSString, NSMutableIndexSet;

@interface AWEFeedLandscapeController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedPlayControlServiceListenerProtocol, AWEFeedLandscapeControllerProtocol, AWELandscapeTransitionOuterContextProvider>

@property (retain, nonatomic) NSArray *landscpeInsertArray;
@property (retain, nonatomic) NSMutableIndexSet *insertIndexs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentAweme;
- (BOOL)useNewTransition;
- (id)screenCastControlView;
- (id)shouldPreventPlayIfActive;
- (void)insertRecallVideos:(id)a0 playModel:(id)a1 completion:(id /* block */)a2;
- (void)insertRemovedXiGuaVideos:(id)a0 playModel:(id)a1 completion:(id /* block */)a2;
- (void)replacePlayerWithIndex:(long long)a0 displayModel:(id)a1;
- (void)enterScreenCastStatusIfNeeded;
- (void)updateScreenCastViewLayout:(id)a0;
- (BOOL)shouldUseHolderPlayer;
- (id)currentPlayerViewController;
- (BOOL)shouldDispatchLandscapeEvent;
- (void)insertLandscapeData:(id)a0 playModel:(id)a1 completion:(id /* block */)a2;
- (id)landscapeTransitionContext;
- (void)willEnterLandscape;
- (void)willExitLandscapeWithModel:(id)a0 modelList:(id)a1;
- (void)didExitLandscapeWithFromContext:(id)a0;
- (double)playerControllerMoveUpOffsetWithModel:(id)a0;
- (BOOL)useBlackMaskViewForFocusView;
- (id)currentLandscapeController;
- (void)insertLandscapeModelList:(id)a0 playModel:(id)a1 completion:(id /* block */)a2;
- (BOOL)scrollToModel:(id)a0 completion:(id /* block */)a1;
- (void)updatePlayerBackgroundView:(id)a0;
- (id)currentInteractionContext;
- (long long)currentIndex;
- (void).cxx_destruct;

@end
