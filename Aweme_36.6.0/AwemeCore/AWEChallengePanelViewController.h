@class UIStackView, NSString, UIView, AWEBaseApiModel, AWEChallengePanelTopBar, AWEChallengeModel, AWEMissionParticipationInfoView, UILabel, UIScrollView;
@protocol AWERequestChallengeResponseModuleInterface, AWEChallengeDetailHorizontalVideoView;

@interface AWEChallengePanelViewController : UIViewController <AWEPageSheetPresentationObserving, AWEPageSheetTransitionDelegate, AWEChallengeDescriptionItemViewDelegate, AWEChallengePanelViewController>

@property (retain, nonatomic) AWEChallengePanelTopBar *topBar;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contentTitleLabel;
@property (retain, nonatomic) AWEMissionParticipationInfoView *missionParticipationInfoView;
@property (retain, nonatomic) UIStackView *descriptionItemsStackView;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalVideoView> *missionExampleView;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalVideoView> *videoListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEChallengeModel *challenge;
@property (retain, nonatomic) AWEBaseApiModel<AWERequestChallengeResponseModuleInterface> *challengeResponse;
@property (copy, nonatomic) id /* block */ didClickMissionExampleCell;
@property (copy, nonatomic) id /* block */ didClickVideoCell;

- (id)createVideoView;
- (void)pageSheetPresentationWillBegin:(id)a0;
- (id)animationControllerForPresentedController;
- (id)animationControllerForDismissedController;
- (void)downloadClick:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithChallenge:(id)a0;

@end
