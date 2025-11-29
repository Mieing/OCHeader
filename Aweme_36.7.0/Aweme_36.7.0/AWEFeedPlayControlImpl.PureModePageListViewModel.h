@interface AWEFeedPlayControlImpl.PureModePageListViewModel : AWEBaseListViewModel {
    void /* unknown type, empty encoding */ isScrollAnimationActive;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerContext;
    void /* unknown type, empty encoding */ _currentScrollableIndex;
}

- (void)appendSectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)loadMoreListData;
- (void)replaceBySectionViewModels:(id)a0 sync:(BOOL)a1;
- (void)updateBySectionViewModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
