@class NSString, NSPointerArray, TPWorkerQueue, TPReporterInitParams, NSDictionary;
@protocol ITPReportInfoGetter, ITPReporter, ITPPlayerInfoGetter;

@interface TPReportController : NSObject <ITPExtendReportController, ITPPlayerEventReceiver>

@property (nonatomic) long long controllerState;
@property (retain, nonatomic) id<ITPReporter> reporter;
@property (retain, nonatomic) TPReporterInitParams *reportInitparams;
@property (retain, nonatomic) TPWorkerQueue *workQueue;
@property (retain, nonatomic) NSPointerArray *reportChannelDelegates;
@property (weak, nonatomic) id<ITPPlayerInfoGetter> playerInfoGetter;
@property (weak, nonatomic) id<ITPReportInfoGetter> reportInfoGetter;
@property (retain, nonatomic) NSDictionary *beforeReporterEventHanlerTable;
@property (retain, nonatomic) NSDictionary *afterReporterEventHanlerTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playerToReportProcessorEventIdMap;

- (id)init;
- (void)dealloc;
- (void)setReportToBeaconNeeded:(BOOL)a0;
- (void)addReportChannelDelegate:(id)a0;
- (void)onEvent:(id)a0;
- (void)handleEventAsync:(unsigned long long)a0 playerEvent:(id)a1;
- (void)dealSpecialEventBeforeReporterIfNeed:(unsigned long long)a0 playerEvent:(id)a1;
- (void)dealSpecialEventAfterReporterIfNeed:(unsigned long long)a0 playerEvent:(id)a1;
- (void)onSetDataSource:(id)a0;
- (void)onGetConvertedDataSource:(id)a0;
- (void)onPrepareStart:(id)a0;
- (void)onPrepareEnd:(id)a0;
- (void)onPlayError:(id)a0;
- (void)onPlayEnd:(id)a0;
- (void)onControllerRelease:(id)a0;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)createAndInitReporter:(unsigned long long)a0;
- (id)invocationWithSel:(SEL)a0;
- (void)setupBeforeReporterEventHandlerTable;
- (void)setupAfterReporterEventHandlerTable;
- (void).cxx_destruct;

@end
