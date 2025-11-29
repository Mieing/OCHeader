@class UIView, NSString, NSArray, AWERecordInspirationCommonSearchHistoryDeleteButton, UIButton, UICollectionView, NSLayoutConstraint, UILabel;

@interface AWERecordInspirationCommonSearchHistoryView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWERecordInspirationCommonSearchHistoryDeleteButton *deleteButton;
@property (retain, nonatomic) UIButton *deleteAllButton;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *historyItems;
@property (retain, nonatomic) NSArray *displayedHistoryItems;
@property (retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint;
@property (nonatomic) BOOL isExpandedStatus;
@property (nonatomic) BOOL needsExpansionControl;
@property (nonatomic) BOOL isEditingStatus;
@property (nonatomic) BOOL isLimitRowsStatus;
@property (nonatomic) long long maxRowsCollapsed;
@property (nonatomic) long long maxRowsExpanded;
@property (nonatomic) BOOL isTrackUpdateDisplayedHistoryItemsActionStatus;
@property (copy, nonatomic) id /* block */ tappedPageAction;
@property (copy, nonatomic) id /* block */ didDeleteActionBlock;
@property (copy, nonatomic) id /* block */ didDeleteItemAction;
@property (copy, nonatomic) id /* block */ didDeleteAllItemAction;
@property (copy, nonatomic) id /* block */ didSelectItemAction;
@property (copy, nonatomic) id /* block */ updateDisplayedHistoryItemsAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIIfNeeded;
- (void)updateEditStatus:(BOOL)a0;
- (void)updateCollectionViewHeightAndLayout;
- (void)updateDisplayedItems;
- (void)updateHistoryItems;
- (void)clickDeleteAction;
- (void)toggleEditMode;
- (BOOL)calculateNeedsExpansionControlBasedOnItemCount:(long long)a0;
- (double)collectionLayoutAvailableWidth;
- (long long)calculateItemsFittingRows:(long long)a0;
- (void)deleteAllButtonTapped;
- (id)historyDisplayItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)toggleExpansionState;
- (void)doneButtonTapped;
- (void)toggleEditMode:(BOOL)a0;

@end
