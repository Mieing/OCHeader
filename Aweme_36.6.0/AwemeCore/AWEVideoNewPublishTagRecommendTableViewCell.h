@class NSHashTable, NSString, UIView, AWEPublishTagRecommendStyleInfo, UIImageView, NSMutableSet, UICollectionView, NSMutableArray, ACCMulticastDelegate, ACCAnimatedButton;
@protocol AWEVideoNewPublishTagRecommendTableViewCellDelegate;

@interface AWEVideoNewPublishTagRecommendTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {
    ACCMulticastDelegate<AWEVideoNewPublishTagRecommendTableViewCellDelegate> *_delegate;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *separateLineView;
@property (nonatomic) BOOL isShowingRecommendList;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) AWEPublishTagRecommendStyleInfo *styleInfo;
@property (retain, nonatomic) ACCAnimatedButton *hashtagButton;
@property (retain, nonatomic) ACCAnimatedButton *atButton;
@property (retain, nonatomic) ACCAnimatedButton *switchInputButton;
@property (retain, nonatomic) UIImageView *gradientView;
@property (copy, nonatomic) NSString *trackPageIdentifier;
@property (retain, nonatomic) NSMutableSet *displayedIndexPaths;
@property (retain, nonatomic) id<AWEVideoNewPublishTagRecommendTableViewCellDelegate> delegate;
@property (readonly, nonatomic) NSMutableArray *hashTags;
@property (readonly, nonatomic) BOOL isShowNarbyCircleTag;
@property (copy, nonatomic) id /* block */ customCollectionCellBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupControl;
- (void)refreshTrackPageIdentifier;
- (void)setupStyleInfo;
- (void)updateHashTags:(id)a0;
- (double)p_calculateWidthForButton:(id)a0;
- (BOOL)hasStaticCell;
- (id)staticCellArray;
- (void)trackShowRecommendListEvent:(BOOL)a0;
- (long long)staticCellAtItem:(long long)a0;
- (id)staticButtonForCell:(long long)a0;
- (struct CGSize { double x0; double x1; })tagRecommendItemSizeWithModel:(id)a0;
- (void)p_hashtagButtonClicked;
- (void)p_atButtonClicked;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;

@end
