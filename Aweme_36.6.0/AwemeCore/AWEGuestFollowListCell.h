@class NSArray, UIImageView, DUXButton, UILabel, AWEUserAccountCertInfoModel;

@interface AWEGuestFollowListCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *verifiedIconView;
@property (retain, nonatomic) DUXButton *followButton;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (retain, nonatomic) AWEUserAccountCertInfoModel *accountCertInfo;
@property (nonatomic) long long followStatus;

- (void)setupBinding;
- (void)updateWithFollowStatus:(long long)a0;
- (void)updateWithVerifiedIconName:(id)a0;
- (void)followButtonDidClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
