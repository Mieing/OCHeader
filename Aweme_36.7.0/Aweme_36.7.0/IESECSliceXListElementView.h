@class NSHashTable, NSString, IESECSliceXScrollAction, NSValue, SLIDelegateProxy, UICollectionViewLayout, IESECSliceXListElementViewInnerDelegate, UICollectionView;

@interface IESECSliceXListElementView : IESECSliceXBaseContainerElementView <UICollectionViewDataSource, IESECSliceXFlexObserver, SLIScrollSubjectProtocol>

@property (retain, nonatomic) NSValue *savedContentOffset;
@property (nonatomic) BOOL needRecordContentOffset;
@property (nonatomic) double scrollActionThreshold;
@property (nonatomic) double lastScrollActionTime;
@property (retain, nonatomic) IESECSliceXScrollAction *scrollAction;
@property (nonatomic) BOOL isVerticalScroll;
@property (nonatomic) long long listType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double rowGap;
@property (nonatomic) double columnGap;
@property (retain, nonatomic) IESECSliceXListElementViewInnerDelegate *collectionViewInnerDelegate;
@property (retain, nonatomic) SLIDelegateProxy *delegateProxy;
@property (weak, nonatomic) UICollectionViewLayout *layout;
@property (readonly, nonatomic) UICollectionView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSHashTable *scrollObserverTable;

+ (BOOL)verifyWithElement:(id)a0 context:(id)a1;
+ (void)initialize;

- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (BOOL)setupElementView;
- (void)flexDidLayout:(id)a0;
- (id)flexSubviews;
- (BOOL)setupSubElementViews;
- (id)createCustomContainerView;
- (struct CGSize { double x0; double x1; })p_sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void)collectionViewContentOffsetDidChange:(id)a0 collectionView:(id)a1;
- (void)collectionViewContentSizeDidChange:(id)a0 collectionView:(id)a1;
- (struct CGSize { double x0; double x1; })fixListSizeWithElements:(id)a0 viewSize:(struct CGSize { double x0; double x1; })a1 fitSize:(struct CGSize { double x0; double x1; })a2 needPadding:(BOOL)a3;
- (void)updateScrollInfoForObserversIfNeeded;
- (struct SLIScrollInfo { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; BOOL x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })latestScrollInfo;
- (void)registerScrollObserver:(id)a0;
- (void)unregisterScrollObserver:(id)a0;
- (id)elementViews;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)layoutSubviews;

@end
