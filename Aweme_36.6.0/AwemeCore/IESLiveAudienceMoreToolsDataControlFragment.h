@class HTSLiveExpandToolbarItem, NSString, NSTimer, IESLiveMoreToolsDataManager;

@interface IESLiveAudienceMoreToolsDataControlFragment : IESLiveRoomComponent <IESLiveMoreToolsDataController>

@property (nonatomic) int loadStrategy;
@property (retain, nonatomic) NSTimer *preRequestTimer;
@property (retain, nonatomic) IESLiveMoreToolsDataManager *moreToolsDataManager;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *toolbarItem;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *landscapeToolbarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)remoteRoomDataReady:(id)a0;
- (void)componentRefresh;
- (void)registerHandler:(int)a0 handler:(id)a1;
- (void)registerHandlerWithItemType:(int)a0 handler:(id)a1;
- (void)triggerMainAreaRequest:(BOOL)a0 completion:(id /* block */)a1;
- (void)invalidPreloader;
- (BOOL)alreadyHasDynamicData;
- (id)getDynamicMoreToolsDataArray:(BOOL)a0;
- (BOOL)checkMoreDataDifferent:(BOOL)a0;
- (void)syncToolbarItem:(id)a0 scene:(BOOL)a1;
- (void)prefetchMainAreaIfNeeded;
- (void).cxx_destruct;

@end
