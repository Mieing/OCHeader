@class AWEAwemeModel, NSString, NSArray, AWEListDataController, AWEUserModel, NSDictionary, AWEShellViewController, UITableView, AWEFeedTableViewController;
@protocol AWESpecialCardDispatchControllerProtocol, AWEFeedPlayRecordInfoProtocol, AWEAwemeFeedBaseContainerProtocol, AWEFeedDynamicCardManagerProtocol, AWEFeedInteractionPreloadControllerProtocol, AWEBaseControllerDIProtocol;

@interface AWEAwemePageContext : AWEPageContext

@property (copy, nonatomic) NSArray *subContextArray;
@property (copy) NSDictionary *subContextCacheDict;
@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) AWEListDataController *dataController;
@property (weak, nonatomic) AWEFeedTableViewController *feedTableViewController;
@property (weak, nonatomic) AWEShellViewController<AWEAwemeFeedBaseContainerProtocol> *feedContainer;
@property (retain, nonatomic) AWEUserModel *originUserModel;
@property (weak, nonatomic) id<AWESpecialCardDispatchControllerProtocol, AWEFeedDynamicCardManagerProtocol> specialCardDispatcher;
@property (weak, nonatomic) id<AWEFeedInteractionPreloadControllerProtocol> interactionPreloadController;
@property (weak, nonatomic) id<AWEFeedPlayRecordInfoProtocol> playRecordInfo;
@property (weak, nonatomic) id<AWEBaseControllerDIProtocol> DI;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double currentAwemePlayTime;

- (id)subContextByProtocol:(id)a0;
- (void)setupSubContext;
- (id)subContextClassNameArray;
- (void).cxx_destruct;
- (id)init;

@end
