@class NSString, UIImageView, UICollectionView, UILabel, UIView, AWEScreenShootShareViewGroupModel;

@interface AWEScreenShootShareFriendsCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *imageBackView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) AWEScreenShootShareViewGroupModel *groupModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_shareCellLongPressWithViewModel:(id)a0 cell:(id)a1 gesture:(id)a2 listModel:(id)a3;
- (void)shareTofriendsWithIndexPath:(id)a0;
- (void)shareMorefriends;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpCollectionView;
- (void)setUpUI;

@end
