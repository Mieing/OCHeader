@class MMFinderLiveLotteryGetPrizeMethodDataItem, UIImageView, UIView, MMUILabel;

@interface MMFinderLiveLotteryGetPrizeMethodCell : UITableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *stateLabel;
@property (retain, nonatomic) UIImageView *selectStateImg;
@property (retain, nonatomic) UIView *sepelateLine;
@property (retain, nonatomic) MMFinderLiveLotteryGetPrizeMethodDataItem *lotteryMethodDataItem;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)layoutNormalUI;
- (void)layoutUnNormalUI;
- (void).cxx_destruct;

@end
