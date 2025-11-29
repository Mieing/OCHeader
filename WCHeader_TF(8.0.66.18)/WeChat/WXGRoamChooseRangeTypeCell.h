@class UIImageView, UILabel;

@interface WXGRoamChooseRangeTypeCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectedIcon;
@property (retain, nonatomic) UIImageView *rightIcon;

+ (double)cellHeight;

- (void)setCellWidth:(double)a0 index:(long long)a1 type:(unsigned long long)a2 count:(long long)a3;
- (void).cxx_destruct;

@end
