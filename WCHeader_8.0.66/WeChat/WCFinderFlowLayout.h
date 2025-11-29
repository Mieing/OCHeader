@interface WCFinderFlowLayout : UICollectionViewLayout {
    struct map<long, SectionInfo, std::less<long>, std::allocator<std::pair<const long, SectionInfo>>> { struct __tree<std::__value_type<long, SectionInfo>, std::__map_value_compare<long, std::__value_type<long, SectionInfo>, std::less<long>>, std::allocator<std::__value_type<long, SectionInfo>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, SectionInfo>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, SectionInfo>, std::less<long>>> { unsigned long long __value_; } __pair3_; } __tree_; } sectionInfos;
}

@property (nonatomic) long long sectionNumber;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) long long behavior;
@property (nonatomic) long long flag;

+ (Class)invalidationContextClass;

- (id)init;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (id)flowDelegate;
- (void)_calculateLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
