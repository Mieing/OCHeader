@class NSString, AWEMateObdCardViewModel, AWEAwemeModel, AWEMateObdCardContainerView;

@interface AWEMateObdCardViewController : UIViewController <AWEFeedUserRecommendListViewControllerProtocol>

@property (retain, nonatomic) AWEMateObdCardContainerView *cardView;
@property (retain, nonatomic) AWEMateObdCardViewModel *viewModel;
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
- (void)didEndDisplaying;
- (void)updateWithModel:(id)a0;
- (void)willDisplay;

@end
