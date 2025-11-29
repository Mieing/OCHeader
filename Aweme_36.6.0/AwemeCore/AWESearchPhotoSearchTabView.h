@class NSArray, UICollectionView, UIImage, AWESearchPhotoSearchTabViewModel, NSMutableArray, NSString;
@protocol AWESearchPhotoSearchTabViewProtocol;

@interface AWESearchPhotoSearchTabView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) UIImage *sourceImage;
@property (retain, nonatomic) NSArray *fixedDetectionList;
@property (weak, nonatomic) id<AWESearchPhotoSearchTabViewProtocol> delegate;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (retain, nonatomic) AWESearchPhotoSearchTabViewModel *selectedModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (id)imageShownAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)selectItemAtIndex:(long long)a0;

@end
