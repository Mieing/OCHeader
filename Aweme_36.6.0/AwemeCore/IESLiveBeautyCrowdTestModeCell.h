@class UILabel, IESLiveImageView, UIView;

@interface IESLiveBeautyCrowdTestModeCell : UITableViewCell

@property (retain, nonatomic) UILabel *modeName;
@property (retain, nonatomic) IESLiveImageView *selectedIcon;
@property (retain, nonatomic) UIView *topSeparator;

- (void)addSelectedIcon;
- (void)removeSelectedIcon;
- (void)configWithModel:(id)a0 isSelected:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0;
- (void)setup;

@end
