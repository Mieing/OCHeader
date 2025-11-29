@class NSString, UIImageView, UILabel, UIView;

@interface AWEPlaylistDetailActionSheetCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL enable;

+ (double)heightWithCellType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)titleText;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)iconImage;
- (void)setupUI;

@end
