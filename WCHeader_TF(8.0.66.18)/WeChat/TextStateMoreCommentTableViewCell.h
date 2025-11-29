@class WCFinderAnimationLoadingView, UILabel, UIView, UIButton;

@interface TextStateMoreCommentTableViewCell : UITableViewCell

@property (weak, nonatomic) UILabel *moreInfoLabel;
@property (weak, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (nonatomic) unsigned long long moreType;
@property (weak, nonatomic) UIButton *iconView;
@property (retain, nonatomic) UIView *bottomView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setSubMoreType:(unsigned long long)a0 commentMoreCount:(unsigned long long)a1 authorType:(unsigned long long)a2;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setUpUI;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void).cxx_destruct;

@end
