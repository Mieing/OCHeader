@class UIView, NSString, AWEButton, UIImageView, NSDictionary, UIButton, AWEShareTokenHandlerResponseModel, UILabel;

@interface AWEInviteFriendShareView : AWEShareReflowBaseView <AWEUserMessage, AWEInviteFriendShareView>

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIButton *closeView;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEButton *followBtn;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIView *reportContainerView;
@property (retain, nonatomic) UIButton *reportButton;
@property (retain, nonatomic) AWEShareTokenHandlerResponseModel *model;
@property (retain, nonatomic) NSDictionary *reportCommitDictionary;
@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *qrCodeType;
@property (copy, nonatomic) NSDictionary *tokenParams;
@property (copy, nonatomic) id /* block */ reshowCardViewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)chooseReportOrNot;
- (void)p_updateFollowBtn:(long long)a0;
- (void)p_follow;
- (void)p_gotoProfile;
- (BOOL)p_isSocialCoinTask;
- (void)followBtnPressed;
- (void)updateReportButtonTextWithType:(unsigned long long)a0;
- (void)__updateItemsWithUser:(id)a0 status:(long long)a1;
- (id)initWithModel:(id)a0 reportCommitDictionary:(id)a1 reShowCardViewBlock:(id /* block */)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;
- (void)updateUI;
- (id)currentUserID;

@end
