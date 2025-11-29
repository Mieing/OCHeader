@class NSArray, UICollectionView, NSString, UIView, NSMutableArray, UIButton;
@protocol IESLiveCommentWidgetExpandEntryViewDelegate;

@interface IESLiveCommentWidgetExpandEntryView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic) BOOL useFoldableStyle;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) NSMutableArray *foldedEntryItems;
@property (retain, nonatomic) NSMutableArray *unfoldEntryItems;
@property (copy, nonatomic) NSArray *entryItems;
@property (nonatomic) unsigned long long defaultEntryType;
@property (nonatomic) double itemSpacing;
@property (retain, nonatomic) UIView *foldView;
@property (retain, nonatomic) UIButton *foldButton;
@property (retain, nonatomic) UIView *foldRetDot;
@property (nonatomic) BOOL needFold;
@property (nonatomic) BOOL unfoldEntriesSortReverse;
@property (retain, nonatomic) NSMutableArray *hasTrackedShowItems;
@property (nonatomic) BOOL disableSelectOpt;
@property (weak, nonatomic) id<IESLiveCommentWidgetExpandEntryViewDelegate> delegate;
@property (nonatomic) BOOL folded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diContext:(id)a1;
- (id)entryTagFromEntryType:(unsigned long long)a0 componentType:(int)a1;
- (id)initWithDefaultEntryType:(unsigned long long)a0 withFoldableStyle:(BOOL)a1 diContext:(id)a2;
- (void)selectDefaultEntryIfAvailable;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeOnFoledMode;
- (void)loadEntryItems;
- (void)foldBtnClick:(id)a0;
- (void)trackEntrysShow;
- (id)checkFoledItemsHasSelected;
- (void)clickFoldBtn:(id)a0 withAnimation:(BOOL)a1;
- (void)reloadDataWithFold:(BOOL)a0;
- (void)doFoldAction:(id /* block */)a0 finishBlock:(id /* block */)a1 withAnimation:(BOOL)a2;
- (BOOL)checkFoldedItemsShouldShowRedDot;
- (void)trackFoldBtnClick:(BOOL)a0;
- (void)trackEntryClickWithItem:(id)a0;
- (void)expandEntryHasEntered:(id)a0;
- (void)expandEntryDisplayed:(id)a0;
- (void)sortEntryWithEntries:(id)a0 reverse:(BOOL)a1;
- (void)setRedDotForItems:(id)a0;
- (long long)priorityForExpandEntryItem:(id)a0;
- (void)calculateItemSpacing;
- (long long)calculatePriorityForExpandEntryItem:(id)a0;
- (double)calculateWidthForEntryCount:(long long)a0 itemSpacing:(double)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)resetSelection;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)willMoveToSuperview:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupView;

@end
