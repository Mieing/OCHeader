@class MMUIButton, MMLiveLotteryDetailCardGiftFlowLayout, NSString, MMHeadImageView, MMCPLabel, NSMutableArray, UICollectionView, MMUILabel, MMFinderLiveLotteryInfo, FinderLiveLotteryContact;
@protocol MMLiveLotteryWinnerRecordCellDelegate;

@interface MMLiveLotteryWinnerRecordCell : MMTableViewCell <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMCPLabel *displayNameLabel;
@property (retain, nonatomic) FinderLiveLotteryContact *lotteryContact;
@property (retain, nonatomic) MMUILabel *addressLabel;
@property (nonatomic) BOOL isAudience;
@property (retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMUIButton *winTitleButton;
@property (nonatomic) long long giftShowType;
@property (nonatomic) long long giftRowNum;
@property (retain, nonatomic) MMLiveLotteryDetailCardGiftFlowLayout *giftFlowLayout;
@property (weak, nonatomic) id<MMLiveLotteryWinnerRecordCellDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (id)getDataArrayWithLotteryInfo:(id)a0 lotteryContact:(id)a1;
+ (BOOL)canShowLotteryGift:(id)a0;
+ (BOOL)isGiftShowMoreLine:(id)a0;
+ (long long)getGiftRowNumWithLotteryContact:(id)a0 showMoreLine:(BOOL)a1;

- (double)lotteryWinnerRecordCellInnerPadding;
- (double)lotteryWinnerRecordHeadImageViewRightMargin;
- (double)lotteryWinnerRecordHeadImageViewLeftMargin;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (void)initHeaderImageView;
- (void)initNameLabel;
- (void)updateWithWinnerContact:(id)a0 isAudience:(BOOL)a1 lotteryInfo:(id)a2 giftShowType:(long long)a3;
- (double)getCollectionViewHeightWithShowType:(long long)a0 giftRowNum:(long long)a1;
- (double)getCollectionViewItemSizeWithShowType:(long long)a0;
- (double)getCollectionViewRowMargin:(BOOL)a0;
- (double)getCollectionViewColumnMarginWithShowType:(long long)a0;
- (double)getCollectionViewNumberMarginWithShowType:(long long)a0;
- (double)getNumberWidthGiftInfo:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutAnchor;
- (void)layoutAudience;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)isCurrentSameGift;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
