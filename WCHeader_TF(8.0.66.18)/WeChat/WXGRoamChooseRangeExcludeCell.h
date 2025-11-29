@class UIImageView, UILabel, UIView, UIButton;

@interface WXGRoamChooseRangeExcludeCell : UITableViewCell

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIImageView *headIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *seperator;
@property (nonatomic) long long cellRangeIndex;
@property (nonatomic) unsigned long long cellType;
@property (copy, nonatomic) id /* block */ reloadBlock;

+ (double)cellHeight;
+ (double)cellHeightUsers;

- (void)setCellWidth:(double)a0 type:(unsigned long long)a1 cellRangeIndex:(long long)a2;
- (void)deleteCell;
- (void)onDetail;
- (void).cxx_destruct;

@end
