@class NSTimer, AWESSCollegeSummaryEntranceModel, NSHashTable;

@interface AWESSCollegeSummaryEntranceManager : NSObject

@property (nonatomic) BOOL needsDisplaySummaryEntrance;
@property (retain, nonatomic) AWESSCollegeSummaryEntranceModel *summaryEntranceModel;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSTimer *expireTimer;

- (void)updateSummaryWithModel:(id)a0;
- (void)addSummaryEntranceObserver:(id)a0;
- (void)handleShowEventWithType:(unsigned long long)a0 params:(id)a1;
- (void)handleClickEventWithType:(unsigned long long)a0 params:(id)a1;
- (void)handleSchemaWithRouterParams:(id)a0;
- (BOOL)canDisplayEntranceForModel:(id)a0;
- (void)expireTimerFired:(id)a0;
- (void)notifyObserversSummaryEntranceDidUpdate;
- (void).cxx_destruct;
- (id)init;

@end
