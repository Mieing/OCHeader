@class IESLiveSoloKTVMVListViewHeader, NSString, UICollectionView, UIImage, UICollectionViewFlowLayout, NSMutableArray, UIView;

@interface IESLiveSoloKTVMVListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) long long type;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) NSMutableArray *cellData;
@property (retain, nonatomic) UIView *errorView;
@property (nonatomic) BOOL needFreshHeader;
@property (nonatomic) BOOL needFreshFooter;
@property (retain, nonatomic) UIImage *headerImage;
@property (nonatomic) long long scaleRatio;
@property (retain, nonatomic) IESLiveSoloKTVMVListViewHeader *currentHeader;
@property (copy, nonatomic) id /* block */ didSelectedItemBlock;
@property (copy, nonatomic) id /* block */ didDeselectedItemBlock;
@property (copy, nonatomic) id /* block */ didClickUploadImageBlock;
@property (copy, nonatomic) id /* block */ didRefreshBlock;
@property (copy, nonatomic) id /* block */ didAppendMoreBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMV;
- (void)initView;
- (void)showLoading:(int)a0;
- (void)cleanSelected;
- (void)updateHeaderImage:(id)a0;
- (void)dismissLoading:(int)a0;
- (void)dismissErrorViewIfNeed;
- (void)createAndAddErrorView;
- (id)getUploadHeader:(id)a0 indexPath:(id)a1;
- (id)getEmptyFooter:(id)a0 kind:(id)a1 indexPath:(id)a2;
- (void)errorViewClick:(id)a0;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithType:(long long)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)showErrorView;
- (void)updateModel:(id)a0;
- (void)updateDownloadStatus:(int)a0;

@end
