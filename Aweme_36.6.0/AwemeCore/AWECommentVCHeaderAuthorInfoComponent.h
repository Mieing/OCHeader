@class NSString, UIImageView, AWEAwemeModel, UILabel, UIView, NSDictionary;

@interface AWECommentVCHeaderAuthorInfoComponent : UIView <AWEUserMessage>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *holderView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *dotLabel;
@property (retain, nonatomic) UILabel *followLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isRequestingFollowing;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)configSubviews;
- (void)updateAuthorLabel;
- (BOOL)canShowFollowLabel;
- (void)updateFollowLabelStatus;
- (void)transferToProfileWithEnterMethod:(id)a0 enterPosition:(id)a1;
- (void)unFollowUser;
- (long long)followFromCommentPageType;
- (long long)followFromPageType;
- (void)trackWithFollowEvent:(id)a0 extraParams:(id)a1;
- (void)onAvatarTapped:(id)a0;
- (void)onNameTapped:(id)a0;
- (void)onFollowLabelTapped:(id)a0;
- (void).cxx_destruct;
- (id)textFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
