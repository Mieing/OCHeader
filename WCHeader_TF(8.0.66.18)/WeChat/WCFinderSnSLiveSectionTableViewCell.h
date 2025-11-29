@class UIView, NSString, UICollectionView, UILabel, NSMutableArray, MMUIButton;
@protocol WCFinderSnSLiveSectionTableViewCellDelegate;

@interface WCFinderSnSLiveSectionTableViewCell : MMTableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCGeneralMonitorDelegate>

@property (retain, nonatomic) UICollectionView *snsLiveCollectionView;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) UILabel *titleTipsLabel;
@property (retain, nonatomic) MMUIButton *clearBtn;
@property (retain, nonatomic) UIView *topSeparateLine;
@property (retain, nonatomic) UIView *bottomSeparateLine;
@property (weak, nonatomic) id<WCFinderSnSLiveSectionTableViewCellDelegate> delegate;
@property (nonatomic) unsigned long long displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithWidth:(double)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)getVisibleFeedVM;
- (void)updateWithDataSource:(id)a0 hiddenBottomSeparateLine:(BOOL)a1;
- (void)scrollToFirstLiveItem;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)onClickClearBtn:(id)a0;
- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (void).cxx_destruct;

@end
