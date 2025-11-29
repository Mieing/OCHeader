@interface AWECommentSwiftImpl.AWECommentBaseListViewModel : AWEBaseListViewModel {
    void /* unknown type, empty encoding */ pageContext;
}

- (void)updateBySectionViewModels:(id)a0;
- (void)updateBySectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)appendSectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)removeSectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)appendSectionViewModels:(id)a0;
- (void)replaceBySectionViewModels:(id)a0;
- (void)removeSectionViewModels:(id)a0;
- (void)replaceBySectionViewModels:(id)a0 sync:(BOOL)a1;
- (void)updateBySectionViewModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)appendSectionViewModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2 sync:(BOOL)a3;
- (void)removeSectionViewModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
