@class MMCPLabel, MMFinderLiveLotteryInfo, PrizeRecord, MMFinderLiveRecordListLotteryInfo;

@interface MMLiveLotteryInfoCell : MMTableViewCell

@property (retain, nonatomic) MMCPLabel *lotteryInfoTitleLabel;
@property (retain, nonatomic) MMCPLabel *lotteryInfoDescLabel;
@property (retain, nonatomic) MMCPLabel *lotteryInfoRightDescTopLabel;
@property (retain, nonatomic) MMCPLabel *lotteryInfoRightDescBottomLabel;
@property (nonatomic) unsigned int supportMultiType;
@property (retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo;
@property (retain, nonatomic) MMFinderLiveRecordListLotteryInfo *milestoneLotteryInfo;
@property (retain, nonatomic) PrizeRecord *prizeRecord;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithMilestoneLotteryRecordInfo:(id)a0;
- (void)updateWithLotteryRecordInfo:(id)a0;
- (void)updateWithPrizeRecord:(id)a0;
- (id)getAttendMethodTitle;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
