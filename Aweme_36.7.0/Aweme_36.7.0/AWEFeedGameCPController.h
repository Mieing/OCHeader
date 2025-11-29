@class NSString, NSMutableArray, AWEAwemeModel;

@interface AWEFeedGameCPController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedPlayControlServiceListenerProtocol>

@property (retain, nonatomic) NSMutableArray *awemeModelArray;
@property (weak, nonatomic) AWEAwemeModel *currentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didEndDisplayingCellBeforeReset:(id)a1 forRowAtIndexPath:(id)a2;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)currentPlayVideoDidChangePlayState:(long long)a0;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (id)awemeModelWithIndexPath:(id)a0;
- (id)shouldPreventPlayIfActive;
- (void)destroyContainerIfNeedWithAwemeModel:(id)a0;
- (void)updateContainerIfNeedWithAwemeModel:(id)a0 cell:(id)a1;
- (void)handleCreateContainerWithCell:(id)a0 withModel:(id)a1;
- (void)prepareGameInfoWithAwemeModel:(id)a0 cell:(id)a1;
- (void)beforeResestContainerWithAwemeModel:(id)a0;
- (void)createContainerIfNeedWithAwemeModel:(id)a0 panelController:(id)a1 interactionController:(id)a2 feedCellController:(id)a3 halfPanelController:(id)a4;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
