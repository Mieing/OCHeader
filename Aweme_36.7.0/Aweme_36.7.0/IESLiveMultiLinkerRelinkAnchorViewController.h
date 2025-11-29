@class IESLiveMultilLinkerRelinkAnchorViewModel, IESLiveCustomButton, UILabel, IESLiveInteractAnchorLinkersView;
@protocol IESLiveCompoundSubscription, IESLiveMultiLinkerProvider;

@interface IESLiveMultiLinkerRelinkAnchorViewController : IESLiveRevenueInteractPopupViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveInteractAnchorLinkersView *linkersView;
@property (retain, nonatomic) IESLiveCustomButton *relinkStartButton;
@property (weak, nonatomic) id<IESLiveMultiLinkerProvider> mLinkerProvider;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveMultilLinkerRelinkAnchorViewModel *viewModel;
@property (nonatomic) BOOL isNetworkProcessing;

- (id)initWithDIContext:(id)a0;
- (void)onSetupNavBar:(id)a0;
- (void)onReLinkAnchorStartButtonClicked;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupSubviews;
- (void)setupData;

@end
