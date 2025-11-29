@class UIImageView, UILabel, UIView;

@interface AWEECOMIMSubToolCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;

+ (id)identifier;
+ (double)cellHeight;

- (void)configCellWithModel:(id)a0 hiddenLine:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)isDarkTheme;

@end
