@class AWEStandardClassifyBarModel, AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionNewTrendGoodsBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *standardClassifyView;
@property (retain, nonatomic) AWEStandardClassifyBarModel *standardClassifyModel;

- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (id)getTrackerPrams;
- (void)trackBarShow;
- (void)trackBarClick;
- (BOOL)shouldShowStandardClassifyView:(id)a0;
- (void)setUpStandardClassifyView;
- (id)standardClassifyModelFor:(id)a0;
- (void)recordTapped;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;
- (void)tapped;

@end
