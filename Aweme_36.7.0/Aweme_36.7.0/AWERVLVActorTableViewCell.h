@class NSArray, UICollectionView, NSString, UILabel, AWELVideoAlbumInfoModel;

@interface AWERVLVActorTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *rolesLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *model;
@property (copy, nonatomic) NSArray *actorList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
