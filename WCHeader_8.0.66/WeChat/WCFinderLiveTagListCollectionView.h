@class NSArray, UICollectionView, WCFinderLiveTagListItem, NSString, WCFinderLiveTagListCollectionViewConfig;
@protocol WCFinderLiveTagListCollectionViewDelegate;

@interface WCFinderLiveTagListCollectionView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *tagCollectionView;
@property (nonatomic) long long lastSelectItemId;
@property (weak, nonatomic) id<WCFinderLiveTagListCollectionViewDelegate> delegate;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) WCFinderLiveTagListItem *initialSelectItem;
@property (retain, nonatomic) WCFinderLiveTagListCollectionViewConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })cellHeightConfig:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)initCollectionView;
- (void)layoutSubviews;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
