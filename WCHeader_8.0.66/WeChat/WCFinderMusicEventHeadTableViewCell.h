@class UILabel, UIButton, MMWebImageView;
@protocol WCFinderMusicEventHeadTableViewCellDelegate;

@interface WCFinderMusicEventHeadTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMWebImageView *authIconView;
@property (retain, nonatomic) UIButton *actionButton;
@property (weak, nonatomic) id<WCFinderMusicEventHeadTableViewCellDelegate> delegate;

+ (double)cellH;
+ (id)cellID;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubview;
- (void)setupLayout;
- (void)updateWithCellData:(id)a0;
- (void)onClickActionButton:(id)a0;
- (void).cxx_destruct;

@end
