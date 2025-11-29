@class NSString, FinderLiveGetPairingTabResponse_PairingInfo, MMFinderLiveTaskId;

@interface MMFinderLiveGroupedProductsViewModel : NSObject <WCFinderLiveLogReportValueProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (retain, nonatomic) FinderLiveGetPairingTabResponse_PairingInfo *data;
@property (nonatomic) unsigned long long currentIndex;

- (id)finderLiveLogReportValueForKey:(id)a0;
- (id)initWithData:(id)a0 taskID:(id)a1 old:(id)a2;
- (void)onBottomMainRouterClicked;
- (void)onLabelClicked:(id)a0;
- (void)openMiniAppBringGMsgIDWith:(id)a0;
- (BOOL)updateIndexIfNeeded:(unsigned long long)a0;
- (void).cxx_destruct;

@end
