@class IESLiveButton, NSString, IESLiveMediaMultiLinkParticipationViewController, UILabel, UIView, UIScrollView;

@interface IESLiveMediaMultiLinkerInviteViewCntroller : IESLiveCommunityInteractPopupViewController <UIScrollViewDelegate>

@property (retain, nonatomic) IESLiveButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *topSeparateLine;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *mLinkerPanelView;
@property (retain, nonatomic) UIView *mLinkerExpandNavBar;
@property (retain, nonatomic) IESLiveMediaMultiLinkParticipationViewController *participationVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onBackButtonClicked;
- (void)onSetupNavBar:(id)a0;
- (void)setupNormalContentView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupViews;

@end
