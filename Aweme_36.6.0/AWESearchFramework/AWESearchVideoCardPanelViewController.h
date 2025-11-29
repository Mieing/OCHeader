@class NSString, NSDictionary, AWESearchCachalotAbstractLynxPipeline, AWESearchCardPanelWebPipeline;

@interface AWESearchVideoCardPanelViewController : AWESearchBusinessContainerViewController

@property (retain, nonatomic) AWESearchCardPanelWebPipeline *webPipeline;
@property (nonatomic) double startShowTimestamp;
@property (nonatomic) double endShowTimestamp;
@property (retain, nonatomic) NSDictionary *logParamDict;
@property (retain, nonatomic) AWESearchCachalotAbstractLynxPipeline *lynxPipeline;
@property (nonatomic) long long containerWidth;
@property (copy, nonatomic) id /* block */ jumpTimeBlock;
@property (copy, nonatomic) id /* block */ switchPanelBlock;
@property (copy, nonatomic) id /* block */ contentSizeChanged;
@property (copy, nonatomic) NSString *tabType;

- (void)feedDidScroll:(id)a0;
- (id)initWithContainerWidth:(long long)a0;
- (void)trackPanelShow;
- (id)formattedJumpTimeForTime:(id)a0;
- (void)updateWithDict:(id)a0 completion:(id /* block */)a1;
- (void)customHandleReloadCurrentSectionWithIndex:(long long)a0 animated:(BOOL)a1;
- (void)customHandleScrollToDisplayItemWithOffset:(double)a0 index:(long long)a1 animated:(BOOL)a2 completionBlock:(id /* block */)a3;
- (id)searchDynamicJSBToCachalotContainerWithName:(Class)a0 params:(id)a1;
- (void)handleSearchJumpTimeNotification:(id)a0;
- (void)trackPanelExit;
- (BOOL)hitAITipsDynamicSettings;
- (void).cxx_destruct;
- (id)footerView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
