@class UILabel, UIImageView;

@interface IESLiveTimeNoticeDateVerticalCell : UITableViewCell

@property (retain, nonatomic) UILabel *dayLabel;
@property (retain, nonatomic) UIImageView *checkBox;
@property (nonatomic) BOOL isSelected;

- (void)cellConfigWithDays:(id)a0 isSelect:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
