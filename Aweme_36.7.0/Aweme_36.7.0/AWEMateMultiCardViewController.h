@class NSString, AWEMateMultipleCardContainerView, AWEFindFriendsMultiCardViewModel;

@interface AWEMateMultiCardViewController : UIViewController <AWEFeedUserRecommendListViewControllerProtocol>

@property (retain, nonatomic) AWEMateMultipleCardContainerView *multiCardContainerView;
@property (retain, nonatomic) AWEFindFriendsMultiCardViewModel *cardContainerViewModel;
@property (nonatomic) BOOL isShowMultiCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBigCardVM:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)updateWithModel:(id)a0;
- (void)willDisplay;

@end
