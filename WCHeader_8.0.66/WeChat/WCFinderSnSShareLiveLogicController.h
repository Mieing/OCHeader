@class WCFinderSnSLiveSectionTableViewCell, NSString, NSData, NSMutableSet, NSMutableArray;
@protocol WCTimelineLogicControllerDelegate;

@interface WCFinderSnSShareLiveLogicController : NSObject <WCFinderLiveExt>

@property (weak, nonatomic) id<WCTimelineLogicControllerDelegate> delegate;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *allDataItems;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (retain, nonatomic) WCFinderSnSLiveSectionTableViewCell *snsLiveCell;
@property (copy, nonatomic) id /* block */ onTriggerContentTableViewReload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (BOOL)shouldShowSnSLiveCell;
- (void)onRefreshHead:(unsigned long long)a0;
- (void)bindCurrentSnSLiveSecionCell:(id)a0;
- (void)requestLatestData;
- (void)requestNextPageData;
- (id)dataSource;
- (id)filterVaildDataItem:(id)a0;
- (id)processServerData:(id)a0 layoutInfo:(id)a1;
- (id)processServerDividerData:(id)a0 layoutInfo:(id)a1;
- (void)sortItem:(id)a0 layoutInfo:(id)a1;
- (void)processLiveExtRegister:(id)a0;
- (void)afterEnterSnSLiveRoom:(id)a0;
- (void)clearAllData;
- (long long)findContentIndexWithTid:(id)a0;
- (void)finderLiveHoverSnsTimelineSwitchChanged:(BOOL)a0;
- (void)onFinderLiveCloseWithTid:(id)a0;
- (void).cxx_destruct;

@end
