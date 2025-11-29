@class NSString, DUXContentSheet, UIView, NSIndexPath;

@interface AWEAwemeShowHasPaidPageRecommendController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol>

@property (retain, nonatomic) UIView *moreRecommendView;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) NSIndexPath *willBeginDraggingIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)detailCellViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (void)showRecommendToast;
- (void)showJumpToHasPaidPageToast;
- (void)fromMoreRecommendShowToast;
- (BOOL)shouldActiveRecommend;
- (id)createMoreRecommendView;
- (void)removeMoreRecommendView;
- (void)jumpToVideoHasPaidPage;
- (void)dismissComplianceNoticeView;
- (void)openHasPaidPageSchema;
- (void)handleMoreRecommendView;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;

@end
