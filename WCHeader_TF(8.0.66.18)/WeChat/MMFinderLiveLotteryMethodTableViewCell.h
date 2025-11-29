@class UIImageView, UIView, MMFinderLiveLotteryMethodDataItem, MMUILabel;

@interface MMFinderLiveLotteryMethodTableViewCell : UITableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *stateLabel;
@property (retain, nonatomic) UIImageView *selectStateImg;
@property (retain, nonatomic) UIView *sepelateLine;
@property (retain, nonatomic) MMFinderLiveLotteryMethodDataItem *lotteryMethodDataItem;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)layoutNormalUI;
- (void)layoutUnNormalUI;
- (void).cxx_destruct;

@end
