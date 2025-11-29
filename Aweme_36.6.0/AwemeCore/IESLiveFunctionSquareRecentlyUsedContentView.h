@class NSArray, UICollectionView, NSString, UIView, UILabel;
@protocol IESLiveFunctionSquareRecentlyUsedContentViewDelegate;

@interface IESLiveFunctionSquareRecentlyUsedContentView : IESLiveFunctionSquareBaseTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL hasLoadedData;
@property (nonatomic) BOOL isTriggerByReloadData;
@property (nonatomic) BOOL isBeforeLive;
@property (retain, nonatomic) UIView *realContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) long long sectionType;
@property (weak, nonatomic) id<IESLiveFunctionSquareRecentlyUsedContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightOfDefault:(long long)a0;
+ (double)heightWithNum:(long long)a0 type:(long long)a1;

- (void)updateWithLiveStatus:(BOOL)a0;
- (void)initializeOnCellLoaded;
- (void)updateWithDataSource:(id)a0 isTriggerByReloadData:(BOOL)a1;
- (void)updateSectionType:(long long)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (long long)cellType;
- (Class)cellClass;
- (void)setupUI;

@end
