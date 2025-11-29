@class BDPSchema, NSString, BDPTimingEvent, BDPUniqueID, BDPTimorLaunchParam;

@interface BDPBootBusiness : NSObject <BDPBootLifeCycleMessage, BDPContainerLifeCycleMessage, BDPAppRouteChangeMessage> {
    BDPTimingEvent *_usageTimingEvent;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPTimorLaunchParam *launchParam;
@property (retain, nonatomic) BDPSchema *schema;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationEnterWithUniqueID:(id)a0;
- (void)applicationEnterBackGroundWithUniqueID:(id)a0;
- (void)applicationEnterForeGroundWithUniqueID:(id)a0;
- (void)viewDidLoad:(id)a0 uniqueID:(id)a1;
- (void)viewWillAppear:(id)a0 uniqueID:(id)a1;
- (void)viewDidAppear:(id)a0 uniqueID:(id)a1;
- (void)viewWillDisappear:(id)a0 uniqueID:(id)a1;
- (void)beforeViewDidDisappear:(id)a0 uniqueID:(id)a1;
- (void)viewDidDisappear:(id)a0 uniqueID:(id)a1;
- (void)applicationMetaFinishWithUniqueID:(id)a0 model:(id)a1 launchParam:(id)a2 schema:(id)a3 error:(id)a4;
- (void)applicationPkgDownloadFinishWithUniqueID:(id)a0;
- (void)applicationPkgDownloadProgress:(float)a0 uniqueID:(id)a1;
- (void)applicationLoadFinishWithUniqueID:(id)a0 error:(id)a1 content:(id)a2 extraParams:(id)a3;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationSCFirstFrameDidShow:(id)a0;
- (void)applicationLCPArrive:(id)a0 timestamp:(double)a1;
- (void)applicationWarmBootDoneWithUniqueID:(id)a0;
- (void)applicationReadyToBootWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)onAppRouteChangePageWillEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageWillLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageDidLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (id)initWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)preRequestNavigatedAppsMeta;
- (void)postNoticeWithUniqueID:(id)a0 type:(long long)a1 viewController:(id)a2;
- (void)updateListCache:(id)a0;
- (BOOL)checkNeedCallContainerOpt:(id)a0;
- (void)checkValidSchema;
- (void)publicSchemaCheck;
- (void)checkSchema;
- (void)doImportantOperations;
- (BOOL)checkSchemaValidateOnLCP;
- (void)checkSchemaValidate;
- (void).cxx_destruct;
- (void)dealloc;

@end
