@class NSArray, NSString, NSIndexPath, NSMutableArray;

@interface CMCAwemeDetailSceneController : CMCSceneController

@property (copy, nonatomic) id /* block */ delayRealTimeClickTask;
@property (retain, nonatomic) NSIndexPath *delayRealTimeClickIndexPath;
@property (nonatomic) long long adGap;
@property (nonatomic) long long curRequestIndex;
@property (nonatomic) long long nextRequestIndex;
@property (nonatomic) BOOL isAdRequesting;
@property (copy, nonatomic) NSArray *curItems;
@property (weak, nonatomic) NSMutableArray *dataSources;
@property (nonatomic) unsigned long long requestSource;
@property (nonatomic) unsigned long long lastAdShowGap;
@property (copy, nonatomic) NSString *preItemId;

+ (Class)aAWECommerceModuleServiceDOUYINHTSAdapterClass;

- (id)aAWECommerceModuleServiceDOUYINHTSAdapter;
- (void)willDisplayCellWithContext:(id)a0 indexPath:(id)a1;
- (void)didEndDisplayingCellWithContext:(id)a0 indexPath:(id)a1;
- (void)didDeleteCell:(id)a0;
- (BOOL)shouldDelayRealtimeClickWithAweme:(id)a0 referString:(id)a1;
- (void)delaySendRealTimeClickWithAweme:(id)a0 indexPath:(id)a1 monitorData:(id)a2;
- (void)cancelDelayRealTimeClickTaskIfNeed;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sceneDidLoad;

@end
