@class UIView, NSString, UIColor, UICollectionViewFlowLayout, MMAssetInfo, NSMutableArray, UICollectionView, NSMutableSet, NSIndexPath;
@protocol MMImagePickerControlCenter, MMAssetSelectedCollectionViewDelegate;

@interface MMAssetSelectedCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    UICollectionViewFlowLayout *m_collectionLayout;
    UICollectionView *m_collectionView;
    UIView *m_snapedView;
    NSIndexPath *m_oldIndexPath;
    MMAssetInfo *m_selectedInfo;
    NSMutableSet *m_disableInfo;
    UIColor *m_borderColor;
}

@property (retain, nonatomic) NSMutableArray *previewInfos;
@property (weak, nonatomic) id<MMImagePickerControlCenter> controlCenter;
@property (weak, nonatomic) id<MMAssetSelectedCollectionViewDelegate> delegate;
@property (readonly, nonatomic) MMAssetInfo *selectedInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithBorderColor:(id)a0;
- (void)updateWidth:(double)a0 showCount:(unsigned long long)a1;
- (void)changeToAssetInfo:(id)a0;
- (void)changeToAssetInfo:(id)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;
- (void)insertItemAtLast;
- (void)deleteItemAtIndex:(unsigned long long)a0;
- (void)toggleSelectAssetInfo:(id)a0;
- (unsigned long long)indexForAssetInfoIgnoreDisables:(id)a0;
- (void)reloadView;
- (id)indexPathForAssetInfo:(id)a0;
- (BOOL)isDisableForAssetInfo:(id)a0;
- (void)configCollectionView;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)handlelongGesture:(id)a0;
- (void).cxx_destruct;

@end
