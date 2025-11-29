@class NSString, UITableViewCell, AWEAwemeModel, NSDictionary, UIViewController;
@protocol AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionPanelDelegate, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionCommerceDelegate, AWEFormatLiveFeedViewControllerProtocol, AWEFeedTableViewCellControllerPlayerDelegate, AWEFeedTableViewCellProtocol;

@interface AWEFormatLiveContainerController : UIViewController <AWEFeedTableViewCellViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEFormatLiveFeedViewControllerProtocol> *liveController;
@property (weak, nonatomic) id<AWEFeedTableViewCellControllerPlayerDelegate> playerDelegate;
@property (nonatomic) long long indexPath;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long type;
@property (readonly, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEPlayInteractionViewControllerProtocol> interactionController;
@property (weak, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *superCell;
@property (copy, nonatomic) NSDictionary *extTrackLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadWithModel:(id)a0;
- (void)p_addChild;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
