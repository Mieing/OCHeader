@class NSString, IESLiveUserInteractionContext;

@interface IESLiveUserInteractionMonitor : NSObject <IESLiveUserInteractionMonitorInterface>

@property (retain, nonatomic) IESLiveUserInteractionContext *context;
@property (nonatomic) BOOL enable;
@property (nonatomic) double throttleInterval;
@property (nonatomic) long long sampleGap;
@property (nonatomic) long long sampleSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startMonitorWithContext:(id)a0;
- (void)stopMonitorWithScene:(long long)a0 roomID:(id)a1;
- (void)onClickEvent:(id)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)onDraggingEvent:(id)a0 downLocation:(struct CGPoint { double x0; double x1; })a1 upLocation:(struct CGPoint { double x0; double x1; })a2 dragDuration:(double)a3 velocity:(struct CGPoint { double x0; double x1; })a4;
- (BOOL)checkReportCondition;
- (void)reportUserInteraction:(long long)a0 params:(id)a1;
- (void).cxx_destruct;
- (BOOL)isMonitoring;
- (id)init;
- (void)updateContext:(id)a0;

@end
