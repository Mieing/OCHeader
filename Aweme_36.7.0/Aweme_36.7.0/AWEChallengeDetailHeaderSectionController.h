@class AWEChallengeDetailHeaderView, DUXPopover, UIButton, NSString, AWEBizUIBubble;
@protocol AWEPageSheetPresentationObserving, AWEChallengeDetailHeaderSectionControllerDelegate;

@interface AWEChallengeDetailHeaderSectionController : AWEBaseDetailHeaderSectionController <AWEChallengeDetailHeaderViewDelegate, IGListScrollDelegate>

@property (retain, nonatomic) AWEChallengeDetailHeaderView *headerView;
@property (weak, nonatomic) id<AWEChallengeDetailHeaderSectionControllerDelegate> delegate;
@property (weak, nonatomic) id<AWEPageSheetPresentationObserving> panelDelegate;
@property (weak, nonatomic) AWEBizUIBubble *favoriteHintBubble;
@property (weak, nonatomic) DUXPopover *favoriteHintPopover;
@property (retain, nonatomic) UIButton *superViewFavoriteButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didBindSectionViewModel;
- (void)viewControllerWillDisappear:(BOOL)a0 isBeingDismissed:(BOOL)a1 isMovingFromParentViewController:(BOOL)a2;
- (void)listAdapter:(id)a0 didScrollSectionController:(id)a1;
- (void)listAdapter:(id)a0 willBeginDraggingSectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDraggingSectionController:(id)a1 willDecelerate:(BOOL)a2;
- (id)detailHeaderView;
- (void)updateHeaderViewWithModel:(id)a0;
- (void)removeFavoriteHint;
- (void)onReceiveChallengeFavoriteChanged:(id)a0;
- (void)updateContentAlpha:(double)a0;
- (void)updateBackgroundImageViewTopOffsetAndAlphaChange;
- (void)updateBackgroundImageViewTopOffset;
- (id)calculateZoomTransitionForFinalIndex:(long long)a0;
- (void)hideTopImageViewAnimated:(BOOL)a0;
- (void)commerceUpdateBackgroundImageViewTopOffset;
- (void)resetTopImageView;
- (void)updateBackgroundImageViewBottomOffset:(double)a0;
- (void)updateLayoutWhenFilterShow;
- (double)topImageViewActualHeight;
- (void)updateTopImageViewAlpha:(double)a0;
- (void)showFavoriteHintBubble:(BOOL)a0;
- (id)baikeTrackParamsWithDocID:(id)a0;
- (void)headerView:(id)a0 heightDidChange:(double)a1;
- (void)headerView:(id)a0 heightDidChangeWithAnimated:(double)a1;
- (void)headerViewDidTapCollectionButton:(id)a0 sender:(id)a1;
- (void)headerViewDidTapOwnerNameLabel:(id)a0;
- (void)headerViewDidTapAvatarImageView:(id)a0;
- (void)headerViewDidTapGoButton:(id)a0;
- (void)headerViewDidTapBannerView:(id)a0;
- (void)headerViewDidShowBannerView:(id)a0;
- (void)headerViewDidShowTopImageView:(id)a0 gradientImage:(id)a1;
- (void)headerViewDidShowBaike:(id)a0 docID:(id)a1;
- (void)headerViewDidClickBaike:(id)a0 docID:(id)a1;
- (void)headerViewDidTappedTopImageView;
- (void).cxx_destruct;
- (id)init;
- (BOOL)showSeparator;
- (id)sectionBackgroundColor;
- (void)addObservers;

@end
