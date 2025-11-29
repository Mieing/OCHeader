@class NSString, UIImageView, UILabel, UIView;

@interface MMFinderLiveCompleteViewReplaySettingsCheckboxCell : UITableViewCell

@property (retain, nonatomic) UIImageView *checkboxIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorBar;
@property (retain, nonatomic) NSString *title;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
