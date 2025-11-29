@class UIImageView, UILabel, UIView;

@interface AWEIMLocalFansGroupCardMessageTableViewCell : AWEIMSystemMessageTableViewCell

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

+ (double)localFansGroupCardMessageCellHeight;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)defaultSubTitleStr;
- (void)localFansGroupCardMessageCellTapped;
- (void)configImageViewWithURL:(id)a0 placeholder:(id)a1;
- (void)updateTitleLabel:(id)a0 subTitleLabel:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
