@class UIColor, UIFont, NSString, UICollectionView, MJPrecisionPickerViewLayout;
@protocol MJPrecisionPickerViewDataSource, MJPrecisionPickerViewDelegate;

@interface MJPrecisionPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, MJPrecisionPickerViewLayoutDelegate> {
    UICollectionView *_collectionView;
    MJPrecisionPickerViewLayout *_collectionViewLayout;
    BOOL _triggeredSilently;
    struct { BOOL needsScroll; BOOL silently; BOOL animated; long long toValue; } _scrollInfo;
    BOOL _isDirty;
    struct vector<UPPrecisionCellModel, std::allocator<UPPrecisionCellModel>> { struct *__begin_; struct *__end_; struct __compressed_pair<UPPrecisionCellModel *, std::allocator<UPPrecisionCellModel>> { struct *__value_; } __end_cap_; } _cellModels;
    long long _lastValueAtCenter;
    long long _lastScrollAcrossValue;
    struct map<long, double, std::less<long>, std::allocator<std::pair<const long, double>>> { struct __tree<std::__value_type<long, double>, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>>, std::allocator<std::__value_type<long, double>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, double>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _valueCenterMap;
}

@property (weak, nonatomic) id<MJPrecisionPickerViewDataSource> dataSource;
@property (weak, nonatomic) id<MJPrecisionPickerViewDelegate> delegate;
@property (nonatomic) long long minValue;
@property (nonatomic) long long maxValue;
@property (nonatomic) unsigned long long precision;
@property (nonatomic) unsigned long long stride;
@property (nonatomic) long long defaultValue;
@property (nonatomic) double autoSnapThreshold;
@property (nonatomic) double strideWidth;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double labelHeight;
@property (nonatomic) BOOL isShowLabelIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupDefaultValues;
- (void)commonInit;
- (void)selectValue:(long long)a0 animated:(BOOL)a1;
- (void)selectValue:(long long)a0 silent:(BOOL)a1 animated:(BOOL)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)handleSupplementaryLabelTapGesture:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (long long)lengthForItemAtIndexPath:(id)a0;
- (double)widthForLabelItemAtIndexPath:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)scrollToValue:(long long)a0 silently:(BOOL)a1 animated:(BOOL)a2;
- (long long)modelCount;
- (const struct { long long x0; long long x1; BOOL x2; } *)modelAtIndex:(long long)a0;
- (void)rebuildIfNeeded;
- (void)rebuild;
- (double)widthForContent:(id)a0 ofValue:(long long)a1;
- (double)widthForLabel:(id)a0;
- (void)updateMaskRect;
- (void)notifyScrollAcrossValue;
- (void)notifySelectValue;
- (BOOL)scrollAcrossOrCloseToValue;
- (long long)valueAtCenterPoint;
- (struct CGPoint { double x0; double x1; })contentOffsetForValue:(long long)a0;
- (id)indexPathForValue:(long long)a0;
- (BOOL)isCollectionViewLoaded;
- (id)findNearestIndividualIndexPath:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
