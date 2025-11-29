@class UILabel, UIImageView;

@interface WCFinderSearchHistoryMoreTableViewCell : UITableViewCell

@property (weak, nonatomic) UILabel *label;
@property (weak, nonatomic) UIImageView *iconView;
@property (nonatomic) unsigned long long cellType;

+ (id)cellID;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setup;
- (void)layoutSubviews;
- (void)updateCellType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
