@class UIColor, NSString, FinderLiveLotteryMethodItem, FinderLiveGiftMethodItem, MMFinderLiveTaskId, NSMutableArray;

@interface MMFinderLivePrizeConfigItem : NSObject

@property (retain, nonatomic) FinderLiveLotteryMethodItem *lotteryItem;
@property (retain, nonatomic) FinderLiveGiftMethodItem *giftItem;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) UIColor *iconColor;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *titleStatusWording;
@property (retain, nonatomic) NSString *goodsTitle;
@property (retain, nonatomic) NSString *goodsDes;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *statusWording;
@property (nonatomic) BOOL statusDisable;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL isFromStaterVC;
@property (nonatomic) BOOL isLotteryRunning;
@property (nonatomic) unsigned int itemId;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSMutableArray *textArray;
@property (nonatomic) double cellHeight;
@property (nonatomic) double cellMargin;
@property (nonatomic) double cellCorner;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (nonatomic) double headerTitleMargin;
@property (nonatomic) double contentBizCustomHeight;
@property (nonatomic) double contentBizCustomMargin;
@property (nonatomic) double textHeight;
@property (nonatomic) double textMargin;
@property (nonatomic) double textGap;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) double footerTop;
@property (nonatomic) double bizTitleLeft;
@property (nonatomic) double bizTitleHeight;
@property (nonatomic) double descTop;
@property (retain, nonatomic) UIColor *prizeStateLabelColor;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned long long objectId;

+ (id)getPrizeConfigTextItemWithTitle:(id)a0 detail:(id)a1;

- (id)initWithPrizeConfigItem:(id)a0 isFromStaterVC:(BOOL)a1 isLotteryRunning:(BOOL)a2;
- (id)initWithFinderLiveLotteryMethodItem:(id)a0 opType:(unsigned int)a1 liveTaskId:(id)a2 objectId:(unsigned long long)a3;
- (void)updateStatus;
- (void)updateCellData;
- (BOOL)judgeStatusDisable;
- (BOOL)judgeStatusDetail;
- (void)updateTextArray;
- (void)updateHeaderDetail;
- (BOOL)isGiftPrizeType;
- (BOOL)isLotteryPrizeType;
- (BOOL)isLotteryPrizeCustom;
- (BOOL)isLotteryPrizeGift;
- (BOOL)isLotteryPrizeShopProduct;
- (BOOL)isLotteryPrizeGameTeamUp;
- (BOOL)canShowFooterView;
- (BOOL)isCurrentDisplay;
- (id)originConfigItem;
- (id)description;
- (void).cxx_destruct;

@end
