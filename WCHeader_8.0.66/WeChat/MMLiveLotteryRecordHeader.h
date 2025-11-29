@class MMUILabel, LivePrizeRecord;

@interface MMLiveLotteryRecordHeader : UIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) LivePrizeRecord *livePrizeRecord;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithLivePrizeRecord:(id)a0;
- (void).cxx_destruct;

@end
