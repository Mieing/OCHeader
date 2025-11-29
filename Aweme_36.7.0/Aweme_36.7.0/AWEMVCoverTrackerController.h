@class NSString, AWEMVChannelPageContext, NSHashTable, NSDate, NSMutableArray;

@interface AWEMVCoverTrackerController : AWEDCFeedBaseController <AWEMVEventDispatchProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *bizContext;
@property (retain, nonatomic) NSDate *firstCellDisplayDate;
@property (retain, nonatomic) NSHashTable *loadingCells;
@property (nonatomic) long long firstPageCellCount;
@property (nonatomic) long long loadSuccessCount;
@property (nonatomic) BOOL reloadFinished;
@property (nonatomic) BOOL isInOutflow;
@property (nonatomic) long long currentLoadedIndex;
@property (retain, nonatomic) NSMutableArray *loadedCellParams;
@property (copy, nonatomic) NSString *currentVideoSource;
@property (copy, nonatomic) NSString *previousVideoSource;
@property (nonatomic) long long currentReloadIndex;
@property (nonatomic) BOOL isLayouting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)containerBeforeViewDidLoad;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)listDidReloadData;
- (void)onGeneralActionTriggeredWithType:(unsigned long long)a0 sender:(id)a1 params:(id)a2 sectionViewModel:(id)a3;
- (id)commonParams;
- (BOOL)isLaunchReload;
- (void)trackLoadFinishWithDuration:(double)a0 finishType:(long long)a1;
- (BOOL)isValidCell:(id)a0;
- (void)trackCoverLoadedWithParams:(id)a0;
- (void)handleDidLoadCoverImageWithCell:(id)a0 itemID:(id)a1 url:(id)a2 imageOrigin:(long long)a3 loadDuration:(double)a4 error:(id)a5;
- (void).cxx_destruct;

@end
