@class NSString, AWEIronManLandingPageSolidEntranceViewModel, UICollectionView;
@protocol AWEIronManLandingPageSolidEntranceDelegate;

@interface AWEIronManLandingPageSolidEntranceCell : UITableViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWEIronManLandingPageItemInteractionDelegate>

@property (retain, nonatomic) UICollectionView *solidEntranceCollectionView;
@property (retain, nonatomic) AWEIronManLandingPageSolidEntranceViewModel *viewModel;
@property (weak, nonatomic) id<AWEIronManLandingPageSolidEntranceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getCellHeight;
- (void)basicLayout;
- (void)itemDidClick:(id)a0 extra:(id)a1;
- (void)trackItemShowWithItemModel:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)addObserver;
- (void)setUpUI;

@end
