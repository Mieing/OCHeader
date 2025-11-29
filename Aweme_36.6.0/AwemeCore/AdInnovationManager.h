@class NSString, BUPlayableAdJSBRegister, AdInnovationModel, NSMutableArray;
@protocol AdInnovationContainerProtocol, AdInnovationEventReporterProtocol;

@interface AdInnovationManager : NSObject

@property (copy, nonatomic) NSString *jsonStr;
@property (retain, nonatomic) BUPlayableAdJSBRegister *jsbRegister;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL containerAppeared;
@property (weak, nonatomic) id<AdInnovationContainerProtocol> container;
@property (weak, nonatomic) id<AdInnovationEventReporterProtocol> reporter;
@property (retain, nonatomic) AdInnovationModel *model;
@property (nonatomic) double loadStartTimeInterval;
@property (nonatomic) double loadTemplateStartTimeInterval;
@property (nonatomic) double loadTemplateFinishTimeInterval;
@property (nonatomic) double loadUrlSuccessTimeInterval;
@property (nonatomic) double renderFirstScreenTimeInterval;
@property (nonatomic) double lastShowInterval;
@property (nonatomic) double showDuration;
@property (nonatomic) double lastShowDuration;
@property (retain, nonatomic) NSMutableArray *sendEventList;
@property (nonatomic) BOOL jsRuntimeReady;
@property (nonatomic) BOOL isActive;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerDidStartLoading:(id)a0;
- (void)container:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidConstructJSRuntime:(id)a0;
- (void)sendEvent:(id)a0 params:(id)a1;
- (double)calculateStayTime;
- (void)container:(id)a0 didReceiveError:(id)a1;
- (void)appWillEnterForegroundNotification:(id)a0;
- (void)updateWithJson:(id)a0;
- (void)appWillEnterBackgroundNotification:(id)a0;
- (id)containerPosition;
- (id)initWithJson:(id)a0 container:(id)a1 reporter:(id)a2;
- (id)buildGlobalProps;
- (void)loadInnovationAd;
- (void)containerAppear;
- (void)containerDisAppear;
- (void)viewPositionChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewTagName:(id)a1;
- (void)registerSafeAreaList:(id)a0;
- (void)container:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (void)trackContainerRealDisplay;
- (void)notifyRenderSuccess;
- (void)trackDestroyEvent;
- (id)frameToPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetTimeInterval;
- (void)registerJsbIfNeed;
- (void)appWillTerminateNotification:(id)a0;
- (void)sendContainerAppearedEvent:(BOOL)a0;
- (void)handleConatinerClose;
- (void)containerAppearedTimeStatistics;
- (void)trackContainerAppear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positionToFrame:(id)a0;
- (void).cxx_destruct;
- (id)contentView;
- (void)_reset;
- (void)reset;
- (void)dealloc;
- (void)setup;
- (void)addObservers;
- (void)setupConfig;

@end
