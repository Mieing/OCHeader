@class NSMutableDictionary, UICollectionView, TextStatePublishIconList, NSString, TextStatePublishOfficialIconCollectionLayout;
@protocol TextStatePublishOfficialIconCollectionViewDelegate;

@interface TextStatePublishOfficialIconCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) TextStatePublishOfficialIconCollectionLayout *collectionViewLayout;
@property (nonatomic) long long itemCountPerRow;
@property (retain, nonatomic) NSMutableDictionary *iconIdToItem;
@property (retain, nonatomic) NSMutableDictionary *indexPathToItemHeight;
@property (weak, nonatomic) id<TextStatePublishOfficialIconCollectionViewDelegate> delegate;
@property (retain, nonatomic) TextStatePublishIconList *iconList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)refresh;
- (void)updateItemCountPerRow;
- (long long)rowIndexForIndexPath:(id)a0;
- (double)itemHeightForIndexPath:(id)a0;
- (id)itemAtIndexPath:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
