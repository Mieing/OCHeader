@class AWEMVChannelPageContext, NSString, NSDate;

@interface AWEMVTabPerformanceMonitorController : AWEDCFeedBaseController <AWEMVDataPluginProtocol>

@property (nonatomic) BOOL didTrack;
@property (nonatomic) BOOL didDisappear;
@property (retain, nonatomic) NSDate *enterTabDate;
@property (retain, nonatomic) NSDate *beforeViewDidLoadDate;
@property (retain, nonatomic) NSDate *fetchStartDate;
@property (retain, nonatomic) NSDate *fetchEndDate;
@property (nonatomic) long long fetchResult;
@property (retain, nonatomic) NSDate *firstCellRenderDate;
@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterContainerWithModel:(id)a0;
- (void)containerBeforeViewDidLoad;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (BOOL)autoAttachToDataController:(id)a0;
- (BOOL)isContentCell:(id)a0;
- (void)sendTrackIfNeeded;
- (void).cxx_destruct;

@end
