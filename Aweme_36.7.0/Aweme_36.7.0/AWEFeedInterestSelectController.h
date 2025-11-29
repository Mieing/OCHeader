@class NSString, AWEFeedHotSpotBlockAlert, AWEAwemeModel;

@interface AWEFeedInterestSelectController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedInterestSelectProtocol>

@property (nonatomic) BOOL closingInterestCard;
@property (copy, nonatomic) NSString *shouldDeleteItemID;
@property (nonatomic) BOOL shouldDisableScroll;
@property (copy, nonatomic) NSString *disableScrollItemID;
@property (retain, nonatomic) AWEFeedHotSpotBlockAlert *hotSoptBlockAlert;
@property (nonatomic) BOOL justRefresh;
@property (copy, nonatomic) NSString *quitMethod;
@property (retain, nonatomic) AWEAwemeModel *beforeRefreshModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)beginRefresh;
- (void)viewDidLoadAfterTableviewSetup;
- (void)scrollViewDidScrollEndWithActive;
- (void)addQestuionQuitLog:(id)a0;
- (BOOL)disableContainerHorizontalScrollWithModel:(id)a0 directionToRight:(BOOL)a1;
- (void)onClickToCloseInterestCardNotification:(id)a0;
- (void)removeBlockAlertFromQueue;
- (void)addBlockAlertToQueue;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
