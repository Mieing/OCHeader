@class UILabel, UIStackView, AWETaskLiteModel, UIScrollView, UIView, AWEAdTaskLitePanelTopBar;
@protocol AWEChallengeDetailHorizontalVideoView;

@interface AWEAdTaskLitePanelViewController : UIViewController

@property (retain, nonatomic) AWEAdTaskLitePanelTopBar *topBar;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contentTitleLabel;
@property (retain, nonatomic) UIStackView *descriptionItemsStackView;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalVideoView> *missionExampleView;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalVideoView> *videoListView;
@property (copy, nonatomic) id /* block */ didClickMissionExampleCell;
@property (readonly, nonatomic) AWETaskLiteModel *taskLiteModel;

- (void)closeButtonAction:(id)a0;
- (id)createVideoView;
- (void)pageSheetPresentationWillBegin:(id)a0;
- (id)initWithTaskLiteDetail:(id)a0;
- (void)startShoot:(id)a0;
- (void)presentOnViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
