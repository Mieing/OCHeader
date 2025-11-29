@class LSIMMemberSearchViewController, LSIMCommonModalViewController, UILabel, LSNaviBar, UIButton, UIScrollView, UIView, NSString, LSIMBizConversation, LSIMNoticeModel, LSIMMemberManager, LSIMImageTextVerticalView, UIImageView;

@interface LSIMSettingsViewController : UIViewController <LSIMBizConversationDataSourceObserver, LSIMMemberSearchViewControllerDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) LSIMBizConversation *conversation;
@property (retain, nonatomic) LSIMMemberManager *memberManager;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *infoHeaderView;
@property (retain, nonatomic) UIImageView *headerAvatarImageView;
@property (retain, nonatomic) UILabel *headerNameLabel;
@property (retain, nonatomic) UILabel *headerCountLabel;
@property (retain, nonatomic) UIView *settingsView;
@property (retain, nonatomic) LSIMImageTextVerticalView *notifyButton;
@property (retain, nonatomic) LSIMImageTextVerticalView *moreButton;
@property (retain, nonatomic) LSIMNoticeModel *noticeModel;
@property (retain, nonatomic) UIView *noticeView;
@property (retain, nonatomic) UILabel *noticeTitleLabel;
@property (retain, nonatomic) UIImageView *noticeArrowImageView;
@property (retain, nonatomic) UILabel *noticeContentLabel;
@property (retain, nonatomic) LSIMMemberSearchViewController *searchVC;
@property (retain, nonatomic) LSIMCommonModalViewController *modalVC;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) LSNaviBar *naviBar;
@property (nonatomic) BOOL isSettingMute;
@property (nonatomic) double limitShowNaviOffsetY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupView;
- (void)commonModalViewDidClosed:(id)a0;
- (void)conversationDidUpdate:(id)a0;
- (id)initWithGroupConversation:(id)a0 memberManager:(id)a1;
- (void)showModalVC:(id)a0;
- (BOOL)checkConvresationIsDissolved;
- (BOOL)checkCurrentUserInConversation;
- (void)p_setupInfoHeaderView;
- (void)p_setupSettingsView;
- (void)p_setupNoticeView;
- (struct CGSize { double x0; double x1; })p_multilineSizeWithText:(id)a0 font:(id)a1 maxWidth:(double)a2 lineHeight:(double)a3;
- (void)showQuitConversationAlertDialog;
- (void)quitGroupConversation;
- (void)popToConversationPage;
- (void)leaveSettingsPage;
- (void)leaveConversationFromSettings;
- (void)p_trackerNoticeClickShow;
- (void)notifyButtonTapped;
- (void)showMoreModalView;
- (void)noticeViewDidTapped;
- (void).cxx_destruct;
- (id)groupName;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)backButtonTapped:(id)a0;

@end
