@class UILabel;

@interface IESLiveViewingHistoryPlaceholderCell : UITableViewCell

@property (weak, nonatomic) UILabel *descLabel;

- (void)configureUI;
- (void)configDesc:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;

@end
