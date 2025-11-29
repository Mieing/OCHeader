@class AWEStandardClassifyBarModel, AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionNewRelatedNovelElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *relatedNovelView;
@property (retain, nonatomic) AWEStandardClassifyBarModel *novelModel;

+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (BOOL)shouldAppearWithData:(id)a0;
- (id)getTrackerPrams;
- (void)trackStayDurationEvent;
- (void)trackBarShow;
- (void)trackBarClick;
- (BOOL)shouldShowRelatedNovelView:(id)a0;
- (id)novelModelFor:(id)a0;
- (void)updateRelatedNovelView;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;
- (void)tapped;

@end
