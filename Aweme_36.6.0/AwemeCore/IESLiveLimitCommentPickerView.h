@class NSArray, UICollectionView, UIImage, NSString;
@protocol IESLiveLimitCommentPickerViewDelegate, IESLiveLimitCommentPickerViewDataSource;

@interface IESLiveLimitCommentPickerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double fisheyeFactor;
@property (nonatomic) unsigned long long selectedItem;
@property (nonatomic) unsigned long long preItem;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (retain, nonatomic) UIImage *contentDefaultImage;
@property (retain, nonatomic) UIImage *contentSelectImage;
@property (nonatomic) BOOL isUseGenerator;
@property (weak, nonatomic) id<IESLiveLimitCommentPickerViewDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveLimitCommentPickerViewDelegate> delegate;
@property (retain, nonatomic) NSArray *contentDefaultImageURL;
@property (retain, nonatomic) NSArray *contentSelectImageURL;
@property (retain, nonatomic) NSString *selectColor;
@property (retain, nonatomic) NSString *unselectColor;
@property (copy, nonatomic) id /* block */ tapCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initPickerContentOffset;
- (void)selectItem:(unsigned long long)a0 animated:(BOOL)a1 notifySelection:(BOOL)a2;
- (double)offsetForItem:(unsigned long long)a0;
- (void)selectItem:(unsigned long long)a0 animated:(BOOL)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)initialize;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionViewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)scrollToItem:(unsigned long long)a0 animated:(BOOL)a1;

@end
