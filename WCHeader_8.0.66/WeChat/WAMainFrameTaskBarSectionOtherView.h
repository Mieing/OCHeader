@class WAMainFrameTaskBarSectionOtherViewCell, NSString, UICollectionView, UICollectionViewFlowLayout, WAMainFrameTaskBarSectionViewModel;
@protocol WAMainFrameTaskBarSectionOtherViewDelegate;

@interface WAMainFrameTaskBarSectionOtherView : WAMainFrameTaskBarSectionBaseView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, WAMainFrameTaskBarSectionOtherViewCellDelegate> {
    long long _selectedIndex;
    WAMainFrameTaskBarSectionOtherViewCell *_highlightedCell;
}

@property (weak, nonatomic) id<WAMainFrameTaskBarSectionOtherViewDelegate> delegate;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) WAMainFrameTaskBarSectionViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellWidth;
+ (long long)cellHeight;
+ (long long)contentHeight:(long long)a0;

- (id)title;
- (void)initView;
- (void)prepareForReuse;
- (void)initCollectionView;
- (void)updateAccessibilityFrame;
- (void)layoutSubviews;
- (void)reload;
- (BOOL)supportAddToMinimize;
- (void)handleLongPress:(id)a0;
- (void)deleteItem;
- (void)onClickDelete:(id)a0;
- (void)deleteItem:(long long)a0;
- (void)addToMinimize;
- (void)addToMinimize:(long long)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
