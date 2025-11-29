@class NSString, UICollectionView, __RxDataSourceSnapshotter, UIView, UITableView;
@protocol __RxCollectionViewUpdateItemApplying;

@interface __RxDiffableDataSourceViewUpdater : NSObject <__RxCollectionViewUpdateItemApplying>

@property (nonatomic) long long tableViewRowAnimation;
@property (readonly, nonatomic) long long sinkKind;
@property (readonly, weak, nonatomic) id<__RxCollectionViewUpdateItemApplying> updatesSink;
@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (readonly, weak, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) __RxDataSourceSnapshotter *dataSourceSnapshotter;
@property (readonly, nonatomic) UIView *targetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performUpdateWithCollectionViewUpdateItems:(id)a0 dataSourceSnapshotter:(id)a1 animated:(BOOL)a2 updateHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_performCollectionViewInsertUpdate:(id)a0;
- (void)_performTableViewInsertUpdate:(id)a0;
- (void)_performCollectionViewDeleteUpdate:(id)a0;
- (void)_performTableViewDeleteUpdate:(id)a0;
- (void)_performCollectionViewReloadUpdate:(id)a0;
- (void)_performTableViewReloadUpdate:(id)a0;
- (void)_performCollectionViewMoveUpdate:(id)a0;
- (void)_performTableViewMoveUpdate:(id)a0;
- (void)_deleteAllItems;
- (void).cxx_destruct;
- (id)initWithCollectionView:(id)a0;
- (id)initWithCollectionViewUpdatesSink:(id)a0;
- (id)initWithTableView:(id)a0;
- (id)initWithUpdatesSink:(id)a0 collectionView:(id)a1 tableView:(id)a2;
- (void)_performViewUpdates:(id)a0;
- (void)_willPerformDiff:(BOOL)a0;
- (void)_reloadData;

@end
