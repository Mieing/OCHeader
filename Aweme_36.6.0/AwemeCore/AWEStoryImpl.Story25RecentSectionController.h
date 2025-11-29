@interface AWEStoryImpl.Story25RecentSectionController : AWEStoryKit.StoryKitBaseSectionController <UICollectionViewDelegate>

- (void)configSupplementaryHeaderView:(id)a0;
- (void)sectionWillDisplaySupplementaryView:(id)a0;
- (void)configSupplementaryFooterView:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)init;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end
