@class UILabel, UIView;

@interface WCFinderFriendLikeSplitTableViewCell : UITableViewCell

@property (weak, nonatomic) UILabel *splitLabel;
@property (weak, nonatomic) UIView *leftLine;
@property (weak, nonatomic) UIView *rightLine;

+ (double)splitTableViewCellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUPUI;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
