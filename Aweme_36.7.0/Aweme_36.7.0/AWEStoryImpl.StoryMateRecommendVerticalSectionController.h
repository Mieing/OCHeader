@interface AWEStoryImpl.StoryMateRecommendVerticalSectionController : AWEStoryImpl.StoryBaseSectionController <IGListScrollDelegate> {
    void /* unknown type, empty encoding */ visible;
}

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)listAdapter:(id)a0 didScrollSectionController:(id)a1;
- (void)listAdapter:(id)a0 willBeginDraggingSectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDraggingSectionController:(id)a1 willDecelerate:(BOOL)a2;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (void)configSupplementaryFooterView:(id)a0;
- (id)cellIdentifierForModel:(id)a0 index:(long long)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)init;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end
