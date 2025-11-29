@class MMFinderLiveChooseClarityDataItem, UIImageView, UIView, MMUILabel;

@interface MMFinderLiveChooseClarityTableViewCell : UITableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *stateLabel;
@property (retain, nonatomic) UIImageView *selectStateImg;
@property (retain, nonatomic) UIView *sepelateLine;
@property (retain, nonatomic) MMFinderLiveChooseClarityDataItem *clarityMethodDataItem;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setclarityMethodDataItem:(id)a0;
- (void)createUI;
- (void)layoutUI;
- (void)layoutNormalUI;
- (void).cxx_destruct;

@end
