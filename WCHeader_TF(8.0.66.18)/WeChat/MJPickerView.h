@class UIColor, UISelectionFeedbackGenerator, UIFont, NSString, UICollectionView;
@protocol MJPickerViewDataSource, MJPickerViewDelegate;

@interface MJPickerView : UIView <MJPickerViewLayoutDelegate, UICollectionViewDataSource> {
    UICollectionView *_collectionView;
    BOOL _triggeredByDragging;
    BOOL _triggeredSilently;
    long long _itemAtCenterPoint;
    long long _halfItemAtCenterPoint;
    struct map<long, double, std::less<long>, std::allocator<std::pair<const long, double>>> { struct __tree<std::__value_type<long, double>, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>>, std::allocator<std::__value_type<long, double>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, double>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _itemCenterMap;
}

@property (retain, nonatomic) UISelectionFeedbackGenerator *feedback;
@property (weak, nonatomic) id<MJPickerViewDelegate> delegate;
@property (weak, nonatomic) id<MJPickerViewDataSource> dataSource;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double interSpacing;
@property (nonatomic) double labelHeight;
@property (nonatomic) BOOL isFeedbackEnabled;
@property (nonatomic) BOOL isDarkCornerEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)selectItem:(long long)a0 animated:(BOOL)a1;
- (void)selectItem:(long long)a0 silent:(BOOL)a1 animated:(BOOL)a2;
- (void)reloadData:(id /* block */)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)handleSupplementaryLabelTapGesture:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForLabelInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)notifyWillBeginDragging;
- (void)notifyDidSelect:(id)a0;
- (void)notifyPassThroughAndFeedback;
- (void)feedbackIfNeeded;
- (struct CGSize { double x0; double x1; })sizeForItem:(long long)a0 elementCategory:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })sizeForContent:(id)a0 elementCategory:(unsigned long long)a1;
- (BOOL)scrollAcrossOrCloseToItemCenter;
- (void)addDarkCornerMask;
- (void)updateDarkCornerIfNeeded;
- (BOOL)shouldFeedback;
- (id)centralIndexPath;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
