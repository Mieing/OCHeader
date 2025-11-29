@class PrizeRecord, MMCPLabel;

@interface MMLiveLotteryCompleteInfoHeaderView : UIView

@property (retain, nonatomic) MMCPLabel *lotteryInfoTitleLabel;
@property (retain, nonatomic) MMCPLabel *lotteryInfoDescLabel;
@property (retain, nonatomic) PrizeRecord *prizeRecord;

+ (double)headerHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithLotteryRecord:(id)a0 count:(long long)a1;
- (void).cxx_destruct;

@end
