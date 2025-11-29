@class NSDictionary, UIViewController, AWEGeneralSearchHelpPublishResultView;

@interface AWEGeneralSearchHelpPublishResultModule : NSObject

@property (weak, nonatomic) UIViewController *containerVC;
@property (retain, nonatomic) AWEGeneralSearchHelpPublishResultView *currentPublishView;
@property (copy, nonatomic) NSDictionary *searchParams;
@property (nonatomic) double headerHeight;
@property (nonatomic) BOOL isViewDidAppear;

+ (void)trackSuccessResultViewClickWithTask:(id)a0 shootWay:(id)a1 searchParams:(id)a2;
+ (id)getTopicCommonTrackParamsWithTask:(id)a0;
+ (id)getHashTagInfoFromAwemeModel:(id)a0;

- (void)onContainerDidAppear;
- (void)onContainerDidDisappear;
- (void)onContainerResponseFinishRefresh;
- (void)onContainerResponseWillRefresh;
- (void)updateContainerHeaderHeight:(double)a0;
- (void)clearResultView;
- (void)showStrongSuccessResultViewWith:(id)a0 shootWay:(id)a1;
- (void)showWeakResultViewWithResult:(long long)a0;
- (void)trackSuccessResultViewShowWithTask:(id)a0 shootWay:(id)a1;
- (id)initWithContainerVC:(id)a0 task:(id)a1 searchParams:(id)a2;
- (void)showResultViewModuleWithTask:(id)a0 shootWay:(id)a1 result:(long long)a2 isStrongState:(BOOL)a3;
- (void).cxx_destruct;

@end
