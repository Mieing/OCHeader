@class MMInputToolView, BrandFansMsgSessionInfo, NSString, BrandFansContact;

@interface BrandFansMsgContentLogicController : BypMsgContentLogicController <BrandFansContactMgrExt, BrandFansContactProfileControllerDelegate>

@property (nonatomic) BOOL hasAppeared;
@property (retain, nonatomic) BrandFansContact *fansContact;
@property (retain, nonatomic) BrandFansMsgSessionInfo *sessionInfo;
@property (weak, nonatomic) MMInputToolView *toolViewEx;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFansContact:(id)a0 sessionInfo:(id)a1;
- (void)dealloc;
- (void)setup;
- (void)ViewWillAppear;
- (void)ViewDidAppear;
- (void)onWillPopFromNavigationController;
- (void)OpenContactInfo:(id)a0;
- (void)showPrivacyTermsIfNeed;
- (id)GetRightBarButtonImageName;
- (id)GetRightBarButtonTitle;
- (void)showReplyTipsIfNeed;
- (BOOL)CanSendEmoticonMessage;
- (BOOL)CanSendVideoMsg;
- (BOOL)textViewHeadViewSeparateStyle;
- (void)CustomToolViewEX:(id)a0 inputPresenter:(id)a1;
- (void)brandFansContactUpdatedForOpenID:(id)a0 contact:(id)a1;
- (void)onBrandFansMsgSessionReplyTipsUpdatedForSessionInfo:(id)a0;
- (void)onBrandFansMsgAdded:(id)a0 message:(id)a1;
- (void)clickViewDetailInController:(id)a0;
- (void)clickBlockContactInController:(id)a0;
- (void)confirmBlockContact;
- (void)clickUnblockContactInController:(id)a0;
- (void)clickViewProfileInController:(id)a0;
- (void)goToBizProfileWithUsername:(id)a0;
- (void)goToFinderProfileWithUsername:(id)a0;
- (void).cxx_destruct;

@end
