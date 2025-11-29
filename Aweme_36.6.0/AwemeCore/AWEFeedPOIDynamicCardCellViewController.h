@class NSString, NSError, AWEDynamicCardContext, UIView;
@protocol AWEPOIDynamicCardProtocol;

@interface AWEFeedPOIDynamicCardCellViewController : AWEFeedCellViewController <AWEPlayVideoMessage>

@property (retain, nonatomic) AWEDynamicCardContext *dcardContext;
@property (retain, nonatomic) NSError *loadError;
@property (nonatomic) BOOL pageSelected;
@property (nonatomic) BOOL didAppeared;
@property (nonatomic) double timeDidDisplay;
@property (retain, nonatomic) UIView<AWEPOIDynamicCardProtocol> *dcard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)didDisplay;
- (void)applicationEnterBackground;
- (id)modelForPlayer:(id)a0;
- (void)applicationBecomeActive;
- (id)dcardManager;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void)feedTableViewCellDidEndScroll:(id)a0;
- (void)trackCompensateDisplayEvent:(id)a0;
- (void)trackLifeServiceCardShow;
- (void)skipCard;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
