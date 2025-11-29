@class UIViewController, NSString, NSDictionary, AWESearchHotSpotConfigModel, NSMutableArray, AWEGeneralSearchHelpPublishTask;

@interface AWEGeneralSearchHelpPublishManager : NSObject <AWEGeneralSearchHelpPublishTaskDelegate, AWEPublishTaskMessage>

@property (weak, nonatomic) UIViewController *containerVC;
@property (retain, nonatomic) NSMutableArray *publishTasks;
@property (retain, nonatomic) AWEGeneralSearchHelpPublishTask *currentPublishTask;
@property (copy, nonatomic) NSDictionary *currentSearchParams;
@property (retain, nonatomic) AWESearchHotSpotConfigModel *bottomBarConfigModel;
@property (nonatomic) double headerHeight;
@property (retain, nonatomic) NSMutableArray *publishedAwemeIdList;
@property (copy, nonatomic) id /* block */ deleteAwemeCardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 willAppendWithInfo:(id)a1;
- (void)awemeDeleteNotificationHandler:(id)a0;
- (void)setupNotification;
- (void)updateSearchParams:(id)a0;
- (void)onContainerDidAppear;
- (void)onContainerDidDisappear;
- (void)onContainerResponseFinishRefresh;
- (void)onContainerResponseWillRefresh;
- (id)initWithContainerVC:(id)a0;
- (void)updateBottomBarConfigModel:(id)a0;
- (void)updateContainerHeaderHeight:(double)a0;
- (id)shootWayWhiteList;
- (void)helpPublishTaskDidEnd:(id)a0;
- (void)helpPublishTaskDidReceiveResult:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
