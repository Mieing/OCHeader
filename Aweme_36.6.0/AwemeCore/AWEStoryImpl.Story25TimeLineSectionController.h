@interface AWEStoryImpl.Story25TimeLineSectionController : AWEStoryKit.StoryKitBaseSectionController

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)sectionWillDisplaySupplementaryView:(id)a0;
- (void)configSupplementaryFooterView:(id)a0;
- (id)customSupplementaryElementKinds;
- (id)customViewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)init;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end
