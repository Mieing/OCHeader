@class _TtC23BDMultiContentContainer25BaseContentListViewHolder;

@interface BDMultiContentContainer.BaseContentListViewController : AWEBaseListViewController <AWEShellViewControllerProtocol> {
    void /* unknown type, empty encoding */ capabilityConfig;
    void /* unknown type, empty encoding */ collectionViewSize;
    void /* unknown type, empty encoding */ customContainerLayout;
    void /* unknown type, empty encoding */ scrollDirection;
    void /* unknown type, empty encoding */ $__lazy_storage_$_controllerManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_capabilityManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_indexUpdateController;
}

@property (nonatomic, readonly) _TtC23BDMultiContentContainer25BaseContentListViewHolder *viewHolder;

+ (Class)viewModelClass;
+ (Class)viewHolderClass;

- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
