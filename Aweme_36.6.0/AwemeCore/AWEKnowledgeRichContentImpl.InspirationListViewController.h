@interface AWEKnowledgeRichContentImpl.InspirationListViewController : AWEBaseListViewController <AWEListSectionControllerDelegate>

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (long long)workingRangeSize;
- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)sectionControllerWillEnterWorkingRange:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setupCollectionView:(id)a0;

@end
