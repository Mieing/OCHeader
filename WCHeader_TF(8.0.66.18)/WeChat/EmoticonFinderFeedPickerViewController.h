@interface EmoticonFinderFeedPickerViewController : WCFinderFeedPickerViewController

- (void)addPickItemWithViewModel:(id)a0 tabController:(id)a1 feedId:(id)a2;
- (void)removePickItemWithViewModel;
- (void)finderChooseFeedTabController:(id)a0 didSelectItemAtIndex:(long long)a1 withTabModel:(id)a2;
- (void)finderChooseFeedTabController:(id)a0 didSelectItemForFeedId:(id)a1 withTabModel:(id)a2;
- (void)finderChooseFeedTabController:(id)a0 deSelectItemForFeedId:(id)a1 withTabModel:(id)a2;
- (void)selectItemWarning:(id)a0;

@end
