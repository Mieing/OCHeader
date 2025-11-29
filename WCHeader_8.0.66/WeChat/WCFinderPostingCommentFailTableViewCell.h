@class UIButton;
@protocol WCFinderPostingCommentFailTableViewCellDelegate;

@interface WCFinderPostingCommentFailTableViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *backGroundButton;
@property (weak, nonatomic) id<WCFinderPostingCommentFailTableViewCellDelegate> delegate;
@property (nonatomic) BOOL isInDarkMode;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)clickButtonAction;
- (void).cxx_destruct;

@end
