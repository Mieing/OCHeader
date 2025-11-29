@class NSString, UICollectionView, NSMutableSet, NSMutableArray;
@protocol AWECompanyToolBubbleCellDelegate;

@interface AWECompanyToolBubbleCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEEnterpriseCompanyToolBubbleCellProtocol>

@property (retain, nonatomic) UICollectionView *companyToolCollectionView;
@property (retain, nonatomic) NSMutableSet *selectedBubbleUniqueKeys;
@property (retain, nonatomic) NSMutableArray *tempSelectFromFEBubbleArray;
@property (nonatomic) long long switchBubbleTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECompanyToolBubbleCellDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *bubbleTools;
@property (nonatomic) BOOL disableTrackShowBubble;

- (id)p_findBubbleWithUniqueKey:(id)a0;
- (long long)p_indexOfBubbleUniqueKey:(id)a0;
- (BOOL)p_isBubbleUniqueKeyInBubbleTools:(id)a0;
- (void)addSubviewsForContentView;
- (void)scrollToSelectedBubbleIfNeeded;
- (void)didViewModelSelectNewBubble:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)refreshUI;
- (void)cleanData;

@end
