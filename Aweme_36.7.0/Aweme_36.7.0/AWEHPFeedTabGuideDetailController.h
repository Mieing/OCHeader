@class NSString, AWEHPFeedTabGuidePreHandleController;

@interface AWEHPFeedTabGuideDetailController : AWEAwemeNewDetailBaseController <AWEFeedControllerProtocol, AWEHPFeedTabGuidePreHandleControllerDelegate>

@property (retain, nonatomic) AWEHPFeedTabGuidePreHandleController *preHandleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (long long)hpCurrentIndex;
- (id)hpEnterFrom;
- (id)hpAwemeAtIndex:(long long)a0;
- (id)hpCurrentAwemeList;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
