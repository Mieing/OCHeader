@class NSArray, NSString, UICollectionView;
@protocol AWEIMEmoticonPanelSyncComponent;

@interface AWEIMEmoticonTabDataComponent : AWEIMComponentBase <AWEIMEmoticonTabDataComponent, UICollectionViewDataSource, UICollectionViewDelegate>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *listData;
@property (weak, nonatomic) id<AWEIMEmoticonPanelSyncComponent> syncComponent;
@property (nonatomic) BOOL didFirstAppear;
@property (nonatomic) BOOL lastContainerHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)containerViewDidChangeHidden:(BOOL)a0;
- (void)updateWithListData:(id)a0;
- (void)willDisplayCell:(id)a0 atIndex:(long long)a1 isByContainerHidden:(BOOL)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;

@end
