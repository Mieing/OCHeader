@class MMFinderLiveLotteryInfo, NSString, UIImageView, MMLiveLotteryDetailCardGiftFlowLayout, UICollectionView, NSMutableArray;

@interface MMLiveLotteryDetailCardGiftView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMLiveLotteryDetailCardGiftFlowLayout *flowLayout;
@property (retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long giftCount;
@property (nonatomic) long long column;
@property (nonatomic) long long row;
@property (nonatomic) double itemSize;
@property (nonatomic) double collectionViewWidth;
@property (nonatomic) double collectionViewHeight;
@property (retain, nonatomic) NSMutableArray *showGiftInfoArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)getTypeWithLotteryInfo:(long long)a0;
+ (double)getItemRowMargin;
+ (double)getItemColumnMargin:(unsigned long long)a0;
+ (double)getItemSize:(unsigned long long)a0;
+ (long long)getColumnCount:(unsigned long long)a0;
+ (BOOL)isWinnerWithLotteryInfo:(id)a0;
+ (id)getShowGiftInfoWithLotteryInfo:(id)a0;

- (void)updateWithLotteryInfo:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)addContentView;
- (void)layoutUI;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)isCurrentSameGift;
- (void).cxx_destruct;

@end
