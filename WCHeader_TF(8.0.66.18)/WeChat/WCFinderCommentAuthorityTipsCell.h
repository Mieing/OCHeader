@class UIImageView, YYLabel;
@protocol WCFinderCommentAuthorityTipsCellDelegate;

@interface WCFinderCommentAuthorityTipsCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *tipsLabel;
@property (weak, nonatomic) id<WCFinderCommentAuthorityTipsCellDelegate> delegate;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)commonInit;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
