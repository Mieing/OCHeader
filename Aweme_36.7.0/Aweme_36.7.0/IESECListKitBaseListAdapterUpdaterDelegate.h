@class NSString, UIViewController;
@protocol IESECListKitBaseListViewControllerProtocol, IESECListKitBaseListUpdateDelegate;

@interface IESECListKitBaseListAdapterUpdaterDelegate : NSObject <IGListAdapterUpdaterDelegate>

@property (weak, nonatomic) UIViewController<IESECListKitBaseListUpdateDelegate, IESECListKitBaseListViewControllerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateWithViewController:(id)a0;

- (void)updateFooterHiddenState:(id)a0;
- (void)triggerSectionControllersDidAppearIfNeeded;
- (void)listAdapterUpdater:(id)a0 willPerformBatchUpdatesWithCollectionView:(id)a1;
- (void)listAdapterUpdater:(id)a0 didPerformBatchUpdates:(id)a1 collectionView:(id)a2;
- (void)listAdapterUpdater:(id)a0 willInsertIndexPaths:(id)a1 collectionView:(id)a2;
- (void)listAdapterUpdater:(id)a0 willDeleteIndexPaths:(id)a1 collectionView:(id)a2;
- (void)listAdapterUpdater:(id)a0 willMoveFromIndexPath:(id)a1 toIndexPath:(id)a2 collectionView:(id)a3;
- (void)listAdapterUpdater:(id)a0 willReloadIndexPaths:(id)a1 collectionView:(id)a2;
- (void)listAdapterUpdater:(id)a0 willReloadSections:(id)a1 collectionView:(id)a2;
- (void)listAdapterUpdater:(id)a0 willReloadDataWithCollectionView:(id)a1;
- (void)listAdapterUpdater:(id)a0 didReloadDataWithCollectionView:(id)a1;
- (void)listAdapterUpdater:(id)a0 collectionView:(id)a1 willCrashWithException:(id)a2 fromObjects:(id)a3 toObjects:(id)a4 updates:(id)a5;
- (void).cxx_destruct;

@end
