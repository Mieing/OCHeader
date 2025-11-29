@class NSString;

@interface AWEAwemeDetailScreenCastInnerController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol, AWEScreenCastVideoDelegate>

@property (nonatomic) BOOL isAppear;
@property (copy, nonatomic) NSString *lastCastVideoId;
@property (nonatomic) double appearTime;
@property (nonatomic) long long castPlayVideoChangeCount;
@property (nonatomic) long long scrollCount;
@property (nonatomic) BOOL hasRemovedInnerFeed;
@property (nonatomic) BOOL castFailed;
@property (nonatomic) BOOL castStopped;
@property (nonatomic) BOOL preScrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)a0 model:(id)a1;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (id)curSceneString;
- (void)setupContextHandler;
- (void)updateScreenCastModels;
- (void)castPlayVideoDidChange:(id)a0;
- (id)screenCastCurReferString;
- (void)longVideoFocusModeStatusDidChange:(BOOL)a0;
- (void)castPlayVideoDidChangeFromModel:(id)a0 toModel:(id)a1;
- (void)removePreviousItemsFromVideoId:(id)a0;
- (BOOL)isCurrentCellScreenCasting;
- (void)trackScreenCastInnerFeedClosed;
- (void)closeScreenCastIfNeeded;
- (long long)indexWithDataSource:(id)a0 model:(id)a1;
- (void)removePreviousDataFromIndex:(long long)a0;
- (void)resetDataWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (id)currentCell;

@end
