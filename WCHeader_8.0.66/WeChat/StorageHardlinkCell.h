@class NSString, UIImageView, UILabel, UIView;

@interface StorageHardlinkCell : UITableViewCell

@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) UIImageView *resourceIcon;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *seperateLine;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateCellWithUserName:(id)a0 sessionName:(id)a1 detail:(id)a2 time:(id)a3 finalCell:(BOOL)a4;
- (void).cxx_destruct;

@end
