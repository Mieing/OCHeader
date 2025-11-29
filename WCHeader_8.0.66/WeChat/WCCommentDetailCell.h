@class NSString, WCFinderHeadImageView, UILabel, WCCommentLikeView;

@interface WCCommentDetailCell : UITableViewCell <WCFinderHeadImageViewDelegate>

@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *authorBadgeLabel;
@property (retain, nonatomic) UILabel *authorLikeLabel;
@property (nonatomic) BOOL enableShowFinder;
@property (nonatomic) long long section;
@property (retain, nonatomic) WCCommentLikeView *commentLikeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (struct CGSize { double x0; double x1; })avatarSize;
- (void)finderHeadImageViewDidClick:(id)a0;
- (void)clickAvatar;
- (void)onClickLikeComment;
- (void)longPress:(id)a0;
- (id)backgroundColorInNormalMode;
- (void).cxx_destruct;

@end
