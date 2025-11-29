@interface WCFinderProfileOverviewPageLayout : UICollectionViewFlowLayout {
    struct vector<SectionFrame, std::allocator<SectionFrame>> { struct SectionFrame *__begin_; struct SectionFrame *__end_; struct __compressed_pair<SectionFrame *, std::allocator<SectionFrame>> { struct SectionFrame *__value_; } __end_cap_; } sectionInfos;
}

@property (nonatomic) long long flag;

- (id)init;
- (id)layoutDelegate;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (void)_calculateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetsSeperator:(long long)a0 pos:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_getEdgeInsetForSection:(long long)a0 pos:(long long)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
