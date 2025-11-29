@interface AWEStoryImpl.StoryWrapperSectionController : AWEStoryImpl.StoryBaseSectionController {
    void /* unknown type, empty encoding */ wrappedSectionController;
}

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)sectionWillDisplaySupplementaryView:(id)a0;
- (void)sectionDidEndDisplayingSupplementaryView:(id)a0;
- (void)configSupplementaryFooterView:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end
