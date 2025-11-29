@class NSArray, UICollectionView, NSString, ACCCommonMultiRowsCollectionLayout, AWECoverEditorTextReloadView;
@protocol AWEVideoCoverEditorTextBaseProtocol, AWEVideoCoverEditorTextRecommendTitleProtocol, AWEVideoCoverEditorTextEditProtocol;

@interface AWEVideoCoverEditorTextTitleCell : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWECoverEditorTextReloadViewDelegate>

@property (nonatomic) BOOL singleLine;
@property (retain, nonatomic) ACCCommonMultiRowsCollectionLayout *collectionViewLayout;
@property (weak, nonatomic) id<AWEVideoCoverEditorTextBaseProtocol, AWEVideoCoverEditorTextRecommendTitleProtocol, AWEVideoCoverEditorTextEditProtocol> delegate;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *titleModelArr;
@property (retain, nonatomic) AWECoverEditorTextReloadView *reloadView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadDataForReloadButton;
- (void)clearSelectedTitle;
- (id)initWithTitleArray:(id)a0 layout:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (struct CGSize { double x0; double x1; })sizeWithText:(id)a0;

@end
