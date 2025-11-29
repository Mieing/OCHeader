@class NSString, NSDate;

@interface AWEHPTopTabShowTrackController : AWEBaseController <AWEHPHomeContainerViewControllerLifeCycle>

@property (nonatomic) long long state;
@property (nonatomic) long long reloadSessionID;
@property (nonatomic) long long scrollSessionID;
@property (retain, nonatomic) NSDate *scrollDate;
@property (nonatomic) BOOL delayTrackFromScroll;
@property (nonatomic) long long lastScrollType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hpBeginReloadTopTabWithDetail:(id)a0;
- (void)hpEndReloadTopTabWithDetail:(id)a0;
- (void)hpTopTabDidScrollWithScrollType:(long long)a0;
- (void)p_viewDidAppear;
- (void)p_trackTopTabShowWithReason:(id)a0 editComponentID:(id)a1 editBizTrackParams:(id)a2;
- (void)p_hpEndReloadTopTabWithDetail:(id)a0;
- (void)p_hpTopTabDidScrollWithScrollType:(long long)a0;
- (void)p_hpTopTabDidScrollDelay:(double)a0;
- (BOOL)p_needAddTopUIParamsWithReportReason:(id)a0;
- (id)p_generateTopUIParamsWithContext:(id)a0;
- (id)p_generateItemInfoWithTabInfo:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;

@end
