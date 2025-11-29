@class NSString, NSArray, UICollectionViewFlowLayout, UIImage, NSMutableDictionary, NSMutableArray, WCEditFilterHeaderView, UICollectionView, XEffectEffectManager, NSIndexPath;
@protocol WCEditFilterToolAttrViewDelegate;

@interface WCEditFilterToolAttrView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, WCEditFilterHeaderViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) WCEditFilterHeaderView *headerView;
@property (nonatomic) unsigned long long filterCount;
@property (retain, nonatomic) XEffectEffectManager *effectManager;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSMutableArray *filterValueArray;
@property (retain, nonatomic) NSMutableArray *filterCellImageArray;
@property (retain, nonatomic) NSArray *filterNameArray;
@property (retain, nonatomic) NSMutableDictionary *filterDisplayImageDic;
@property (nonatomic) BOOL didChangeFilter;
@property (retain, nonatomic) UIImage *originalImage;
@property (nonatomic) long long filterIndex;
@property (nonatomic) long long filterValue;
@property (weak, nonatomic) id<WCEditFilterToolAttrViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)reloadCollectionView;
- (id)imageWithImage:(id)a0 scaledToFillSize:(struct CGSize { double x0; double x1; })a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)sliderValueDidChange:(int)a0;
- (void).cxx_destruct;

@end
