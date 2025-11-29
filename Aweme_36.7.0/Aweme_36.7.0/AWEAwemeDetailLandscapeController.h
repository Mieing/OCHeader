@class NSArray, NSString, NSMutableIndexSet;

@interface AWEAwemeDetailLandscapeController : AWEAwemeNewDetailBaseController <AWEFeedLandscapeControllerProtocol, AWELandscapeTransitionOuterContextProvider>

@property (retain, nonatomic) NSArray *landscpeInsertArray;
@property (retain, nonatomic) NSMutableIndexSet *insertIndexs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentAweme;
- (id)screenCastControlView;
- (void)insertRecallVideos:(id)a0 playModel:(id)a1 completion:(id /* block */)a2;
- (void)insertRemovedXiGuaVideos:(id)a0 playModel:(id)a1 completion:(id /* block */)a2;
- (void)replacePlayerWithIndex:(long long)a0 displayModel:(id)a1;
- (void)enterScreenCastStatusIfNeeded;
- (void)updateScreenCastViewLayout:(id)a0;
- (BOOL)shouldUseHolderPlayer;
- (BOOL)isModel:(id)a0 identifierEqualToModel:(id)a1;
- (BOOL)scrollToModel:(id)a0;
- (id)currentPlayerViewController;
- (BOOL)shouldDispatchLandscapeEvent;
- (BOOL)canInsertModelAfterExitLandscape:(id)a0;
- (void)insertLandscapeModelList:(id)a0 playModel:(id)a1;
- (BOOL)shouldScrollAndNotInsertAfterExitLandscape;
- (BOOL)shouldScrollOrInsertWhenModelNotExistAfterExitLandscape;
- (void)insertLandscapeData:(id)a0 playModel:(id)a1 completion:(id /* block */)a2;
- (id)landscapeTransitionContext;
- (void)willEnterLandscape;
- (void)willExitLandscapeWithModel:(id)a0 modelList:(id)a1;
- (void)didExitLandscapeWithFromContext:(id)a0;
- (double)playerControllerMoveUpOffsetWithModel:(id)a0;
- (BOOL)useBlackMaskViewWithModel:(id)a0;
- (BOOL)useBlackMaskViewForFocusView;
- (id)currentLandscapeController;
- (id)currentInteractionContext;
- (long long)currentIndex;
- (void).cxx_destruct;

@end
