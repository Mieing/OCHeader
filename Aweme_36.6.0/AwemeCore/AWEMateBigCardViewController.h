@class NSString, AWEAwemeModel, AWEMateBigCardContainerView, AWEMateBigCardViewModel;

@interface AWEMateBigCardViewController : UIViewController <AWEFeedUserRecommendListViewControllerProtocol>

@property (retain, nonatomic) AWEMateBigCardContainerView *cardView;
@property (retain, nonatomic) AWEMateBigCardViewModel *viewModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didEndDisplaying;
- (void)updateWithModel:(id)a0;
- (void)willDisplay;

@end
