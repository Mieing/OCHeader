@class NSString, UITableViewCell, AWEAwemeModel, NSDictionary;
@protocol AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionCommerceDelegate, AWEHPChannelControllerConfigProtocol, AWEFeedTableViewCellControllerPlayerDelegate, AWEFeedTableViewCellProtocol;

@interface AWEFeedCellViewController : AWEAwemeBaseViewController <AWEFeedTableViewCellViewControllerProtocol, AWEFeedInteractionChannelConfigProtocol>

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
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> channelConfig;

- (void)dealloc;
- (void)didDisplay;
- (void)didEndDisplayingBeforeReset;
- (BOOL)canHandleGestureInCell:(id)a0;
- (void)setAllUIElementsHidden:(BOOL)a0 withAnimation:(BOOL)a1;
- (void)setHideMusicInfoViewFlag:(BOOL)a0;
- (BOOL)isCommonFeedCellVC;
- (BOOL)shouldRespondSingleClick;
- (void)configBackgroundPlay;
- (BOOL)shouldPreventPlayInRefineFrameSelectionMode;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (id)initWithMediaType:(long long)a0;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewDidLoad;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)addObservers;
- (void)willDisplay;

@end
