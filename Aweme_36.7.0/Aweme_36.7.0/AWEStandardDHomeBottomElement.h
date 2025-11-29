@class AWEStandardClassifyBarModel, AWEAntiAddictedNoticeBarView;

@interface AWEStandardDHomeBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *standardClassifyView;
@property (retain, nonatomic) AWEStandardClassifyBarModel *standardClassifyModel;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (id)getTrackerPrams;
- (void)trackStayDurationEvent;
- (void)trackBarShow;
- (void)trackBarClick;
- (void)setUpStandardClassifyView;
- (id)standardClassifyModelFor:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;
- (void)tapped;

@end
