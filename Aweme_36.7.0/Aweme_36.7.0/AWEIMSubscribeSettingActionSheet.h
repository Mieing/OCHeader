@class NSString, NSArray, UIImageView, UICollectionView, UILabel, UIView, AWEIMSubscribeSettingActionSheetContext;

@interface AWEIMSubscribeSettingActionSheet : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) AWEIMSubscribeSettingActionSheetContext *context;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupLayout;
- (void)p_close;
- (void)renderWithTitle:(id)a0 dataSource:(id)a1 context:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
