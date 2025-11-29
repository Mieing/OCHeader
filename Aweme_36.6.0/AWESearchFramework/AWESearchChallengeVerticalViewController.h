@class AWESearchChallengeVerticalCardView, NSString, NSMutableSet, NSMutableArray;

@interface AWESearchChallengeVerticalViewController : AWESearchResultVerticalBaseViewController <AWESearchChallengeVerticalCardViewDelegate>

@property (retain, nonatomic) NSMutableArray *displayIDs;
@property (retain, nonatomic) AWESearchChallengeVerticalCardView *challengeCardView;
@property (copy, nonatomic) NSString *trackPageIdentifier;
@property (retain, nonatomic) NSMutableSet *displayedCardViewData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (void)trackShow;
- (void)customComponentDidFinishRender:(id)a0 withViewModel:(id)a1;
- (BOOL)customPageEnableAsyncProcess;
- (BOOL)shouldOpenNetworkSep;
- (void)refreshTrackPageIdentifier;
- (void)cardViewWillDisplay:(id)a0;
- (id)ugcHashtagLandingParams;
- (void)modelUselessPropertyRollbackExperiment;
- (void)validateAWESearchBackgroundLottieModel;
- (void)validateAWESearchHomeWeatherDataModel;
- (void)validateAWESearchHomeWeatherModel;
- (void)trackRollbackModel:(id)a0;
- (void)trackCardViewShowWithModel:(id)a0;
- (void).cxx_destruct;
- (void)applicationWillResignActive;
- (void)addObserver;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
