@class NSString, NSMutableArray, UICollectionView;

@interface IESLiveLinkedRoomListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveRelatedLiveListViewProtocol>

@property (nonatomic) long long listType;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *linksData;
@property (copy, nonatomic) id /* block */ itemSelectBlock;
@property (copy, nonatomic) id /* block */ alertTrackBlock;
@property (copy, nonatomic) id /* block */ itemShowBlock;
@property (nonatomic) BOOL isMainRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAlert:(id)a0 position:(id)a1;
- (struct CGSize { double x0; double x1; })listViewCellSize;
- (void)updateWithLinkNodes:(id)a0;
- (void)linkRoomSelectBlock:(id /* block */)a0;
- (void)trackForAlertAction:(id /* block */)a0;
- (void)linkRoomShowBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;
- (id)initWithListType:(long long)a0;

@end
