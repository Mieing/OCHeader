@class UIView, NSString, MMWebImageView, UIButton, WCFinderAuthInfoIconView, MMAcceptAgreementCommonHeadView, MMUILabel, MMUIButton;

@interface WCFinderGameLiveAuthViewController : MMCPUIViewController <MMAcceptAgreementResultViewControllerDelegate, ILinkEventExt>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *anchorInfoView;
@property (retain, nonatomic) MMWebImageView *anchorAvatarView;
@property (retain, nonatomic) MMUILabel *anchorNameLabel;
@property (retain, nonatomic) MMUILabel *anchorDescLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) MMUIButton *okButton;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *gameUserId;
@property (nonatomic) unsigned int platformId;
@property (nonatomic) unsigned long long authResultAction;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *gameAuthTicket;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) long long gameLiveEntryScene;
@property (nonatomic) unsigned long long expiredTime;
@property (retain, nonatomic) MMAcceptAgreementCommonHeadView *authExpiredView;
@property (retain, nonatomic) UIButton *authExpiredButton;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (nonatomic) long long authScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAuthInfos:(id)a0;
- (id)initWithAppId:(id)a0 ticket:(id)a1;
- (id)initWithGameLiveAuthTicket:(id)a0 expiredTime:(unsigned long long)a1 authScene:(long long)a2;
- (void)viewDidLoad;
- (void)layoutUI;
- (id)navigationBarBackgroundColor;
- (void)layoutAnchorInfoView;
- (void)layoutAuthExpiredView;
- (void)onClickCancelButton:(id)a0;
- (void)handleCancelAuth;
- (void)onClickOkButton:(id)a0;
- (void)handleAuthSuccessWith:(id)a0 authCode:(id)a1;
- (id /* block */)launchGameAppCallbackHandler;
- (void)handleAuthFailedWithType:(int)a0;
- (id)getHeadTitleByErrorType:(int)a0;
- (id)getHeadSubTitleByErrorType:(int)a0;
- (void)startGameLive;
- (void)onClickDismissButton;
- (void)onClickMakeSureActionWithViewController:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
