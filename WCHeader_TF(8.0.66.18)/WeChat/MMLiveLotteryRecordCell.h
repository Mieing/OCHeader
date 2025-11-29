@class MMUIImageView, PrizeRecord, MMUIView, UIView, MMUILabel;

@interface MMLiveLotteryRecordCell : MMTableViewCell

@property (retain, nonatomic) PrizeRecord *lotteryRecord;
@property (retain, nonatomic) MMUIView *leftImageBbView;
@property (retain, nonatomic) MMUIImageView *leftImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIView *sepelateLine;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithLotteryRecord:(id)a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void).cxx_destruct;

@end
