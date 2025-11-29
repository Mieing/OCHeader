@interface AWECommentPanelListSwiftImpl.CommentSectionController : AWEBaseListSectionController {
    void /* unknown type, empty encoding */ footerView;
    void /* unknown type, empty encoding */ challengeWords;
    void /* unknown type, empty encoding */ commentExpandAction;
    void /* unknown type, empty encoding */ commentModuleService;
    void /* unknown type, empty encoding */ pendingDisplayTrack;
    void /* unknown type, empty encoding */ updatingTickets;
    void /* unknown type, empty encoding */ ugFlowAuthToken;
    void /* unknown type, empty encoding */ businessController;
}

+ (Class)sectionViewModelClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerWillDisappear:(BOOL)a0 isBeingDismissed:(BOOL)a1 isMovingFromParentViewController:(BOOL)a2;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (long long)waterfallColumnCount;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)sectionWillDisplaySupplementaryView:(id)a0;
- (void)sectionDidEndDisplayingSupplementaryView:(id)a0;
- (void)configSupplementaryFooterView:(id)a0;
- (void)updateFinalLayoutAttributes:(id)a0 forDisappearingCellAtIndex:(long long)a1 isDeleted:(BOOL)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (double)separatorHeight;
- (id)sectionBackgroundColor;
- (void)dealloc;
- (struct AWEListKitSeparatorInsets { double x0; double x1; })separatorInsets;
- (Class)footerViewClass;

@end
