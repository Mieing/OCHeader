@class NSString, NSMapTable;

@interface BDPSideBarButtonManager : NSObject <BDPContainerLifeCycleMessage, BDPAppRouteChangeMessage, BDPSideBarButtonManager>

@property (retain, nonatomic) NSMapTable *uniqueIdToButtonList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)viewWillDisappear:(id)a0 uniqueID:(id)a1;
- (void)onAppRouteChangePageWillEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)showSideBarButtonOnAppController:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
