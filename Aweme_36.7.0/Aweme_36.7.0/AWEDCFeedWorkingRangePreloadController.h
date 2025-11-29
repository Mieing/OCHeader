@class NSMutableSet;

@interface AWEDCFeedWorkingRangePreloadController : AWEDCFeedBaseController

@property (nonatomic) BOOL disableLoadmore;
@property (retain, nonatomic) NSMutableSet *visibleTaskIDs;

- (void)sectionControllerWillEnterWorkingRange:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)containerBeforeViewDidLoad;
- (void).cxx_destruct;

@end
