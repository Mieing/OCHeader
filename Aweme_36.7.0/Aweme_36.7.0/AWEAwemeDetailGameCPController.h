@class NSMutableArray;

@interface AWEAwemeDetailGameCPController : AWEAwemeNewDetailBaseController

@property (retain, nonatomic) NSMutableArray *awemeModelArray;

- (void)tableView:(id)a0 didEndDisplayingCellBeforeReset:(id)a1 forRowAtIndexPath:(id)a2;
- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (id)awemeModelWithIndexPath:(id)a0;
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
