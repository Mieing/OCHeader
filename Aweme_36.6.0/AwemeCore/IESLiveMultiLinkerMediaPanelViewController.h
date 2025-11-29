@class NSString, IESLiveMediaMultiLinkParticipationViewController, UIScrollView, IESLiveSegmentedControl, UIView;

@interface IESLiveMultiLinkerMediaPanelViewController : IESLiveCommunityInteractPopupViewController <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *mLinkerPanelView;
@property (retain, nonatomic) IESLiveSegmentedControl *segControl;
@property (retain, nonatomic) UIView *mLinkerExpandNavBar;
@property (retain, nonatomic) IESLiveMediaMultiLinkParticipationViewController *participationVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)multiLinkExpandNavBar:(id)a0;
- (void)onSetupNavBar:(id)a0;
- (void)setupNormalContentView;
- (void)setupNormalSegControl;
- (void)expandNavBar;
- (void)showSettingPanelView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupViews;

@end
