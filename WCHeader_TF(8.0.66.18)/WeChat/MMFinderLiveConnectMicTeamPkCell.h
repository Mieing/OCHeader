@class MMFinderLiveConnectMicPkUser, WCFinderHeadImageView, UILabel, MMLiveIconButton, UIView;

@interface MMFinderLiveConnectMicTeamPkCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *teamLabel;
@property (retain, nonatomic) MMLiveIconButton *actionButton;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) MMFinderLiveConnectMicPkUser *micUser;
@property (nonatomic) BOOL disableChangeTeam;
@property (copy, nonatomic) id /* block */ changeTeamBlock;

+ (id)cellIdentifier;
+ (double)cellHeight;
+ (double)cellWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithMicUser:(id)a0 team:(unsigned long long)a1 disableChangeTeam:(BOOL)a2 isApply:(BOOL)a3;
- (void)initSubviews;
- (void)onChangeTeam;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
