@class UIImageView, UILabel, UIView;

@interface AWEIMShareNoticeMessageTableViewCell : AWEIMSystemMessageTableViewCell

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UIView *awemeCoverBGView;
@property (retain, nonatomic) UIImageView *awemeCoverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (void)tapOnCell:(id)a0;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end
