@class NSString, UIImageView, UILabel, AWEUserRecommendButton, AWEFilterDetail;

@interface AWEFilterDetailTipView : UIView <AWEUserMessage, AWEFilterDetailTipViewProtocol>

@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *badgeImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWEUserRecommendButton *followBtn;
@property (retain, nonatomic) AWEFilterDetail *filterDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)updateByModel:(id)a0;
- (void)unfollowUser;
- (void)p_setupAuthorSecretUI;
- (void)updateFollowBtn;
- (void)p_setupCommonUI;
- (void)p_showAuthorSecretUI:(BOOL)a0;
- (void)followUser;
- (void)didTapFollowBtn;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)initUI;

@end
