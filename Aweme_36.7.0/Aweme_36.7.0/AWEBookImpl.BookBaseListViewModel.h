@interface AWEBookImpl.BookBaseListViewModel : AWEBaseListViewModel <AWEHangoutListViewModelContext>

- (id)provider:(Class)a0;
- (void)updateBySectionViewModels:(id)a0;
- (void)updateBySectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)appendSectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)insertSectionViewModels:(id)a0 atIndexes:(id)a1 animated:(BOOL)a2;
- (void)insertSectionViewModels:(id)a0 atIndexes:(id)a1;
- (void)appendSectionViewModels:(id)a0;
- (void)replaceBySectionViewModels:(id)a0;
- (id)init;

@end
