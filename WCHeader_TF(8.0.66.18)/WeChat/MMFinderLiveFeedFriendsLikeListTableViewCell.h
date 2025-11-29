@class UIView, UIImageView, WCFinderLikeInfo, UILabel, MMUIButton, MMHeadImageView;
@protocol MMFinderLiveFeedFriendsLikeListTableViewCellDelegate;

@interface MMFinderLiveFeedFriendsLikeListTableViewCell : MMTableViewCell

@property (retain, nonatomic) MMHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) MMUIButton *moreBtn;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIView *highLightBGView;
@property (retain, nonatomic) UILabel *firstLikeLabel;
@property (retain, nonatomic) UIImageView *logoIconView;
@property (retain, nonatomic) WCFinderLikeInfo *likeInfo;
@property (weak, nonatomic) id<MMFinderLiveFeedFriendsLikeListTableViewCellDelegate> delegate;
@property (nonatomic) unsigned long long row;
@property (nonatomic) BOOL showFinderIdentifier;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupSubViews;
- (void)setupLikeInfo:(id)a0 needsSeparatorLine:(BOOL)a1 showFirstLikeLabel:(BOOL)a2 canShowMore:(BOOL)a3;
- (void)layoutAllSubviews;
- (void)updateNotSee:(BOOL)a0;
- (void)showHighlightAnimationWithCompletion:(id /* block */)a0;
- (void)onClickMoreBtn;
- (void).cxx_destruct;

@end
