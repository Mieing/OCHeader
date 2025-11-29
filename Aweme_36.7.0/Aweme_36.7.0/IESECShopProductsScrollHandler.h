@class IESECStoreScrollToTopView, NSString, IESECShopProductsHybridContext, UIView, IESECShopProductsBrowseProgressView;

@interface IESECShopProductsScrollHandler : NSObject <IESECStoreScrollToTopViewDelegate, UICollectionViewDelegate, IESECShopProductsScrollAction> {
    IESECShopProductsHybridContext *_context;
    long long _productShowNum;
    long long _productTotalNum;
    unsigned long long _lastCardType;
    BOOL _browseProgressViewFirstShow;
    struct set<long, std::less<long>, std::allocator<long>> { struct __tree<long, std::less<long>, std::allocator<long>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _nonProductCardIndexes;
    struct set<long, std::greater<long>, std::allocator<long>> { struct __tree<long, std::greater<long>, std::allocator<long>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _productCardIndexes;
}

@property (retain, nonatomic) UIView *rootView;
@property (retain, nonatomic) IESECStoreScrollToTopView *scrollToTopView;
@property (retain, nonatomic) IESECShopProductsBrowseProgressView *browseProgressView;
@property (copy, nonatomic) NSString *perfScene;
@property (copy, nonatomic) id /* block */ pagerViewDidScrollCallback;
@property (readonly, nonatomic) long long productBrowsedCount;
@property (readonly, nonatomic) long long productTotalCount;
@property (copy, nonatomic) NSString *scrollToTopIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView:(id)a0;
- (void)shopSlideHintConfig;
- (void)updatePlayableArea;
- (void)didTapScrollToTopView;
- (id)initWithHybridContext:(id)a0;
- (void)updateProductModuleEvent;
- (void)handleProductsModuleScrollEvent:(id)a0;
- (void)updateTabMaxScreenNumber:(id)a0;
- (void)showScrollToTopView;
- (long long)productIndexWithIndex:(long long)a0;
- (void)addRootViewToTopView;
- (void)updateBrowseProgressView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)refresh;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id).cxx_construct;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;

@end
