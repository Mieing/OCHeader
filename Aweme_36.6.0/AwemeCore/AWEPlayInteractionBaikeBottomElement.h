@class AWEStandardClassifyBarModel, AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionBaikeBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *baikeBottomView;
@property (retain, nonatomic) AWEStandardClassifyBarModel *baikeModel;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)getExtraParams;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackStayDurationEvent;
- (BOOL)shouldShowBaikeBottomView:(id)a0;
- (void)trackBarShow;
- (id)baikeModelFor:(id)a0;
- (void)trackBarClick;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;
- (void)tapped;

@end
