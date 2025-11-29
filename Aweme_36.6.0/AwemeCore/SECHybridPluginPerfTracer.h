@class NSString, SECHybridPluginPerfEvent, SECStopWatch;

@interface SECHybridPluginPerfTracer : NSObject

@property (retain, nonatomic) SECHybridPluginPerfEvent *aspectPerfEvent;
@property (retain, nonatomic) SECHybridPluginPerfEvent *pluginPerfEvent;
@property (copy, nonatomic) NSString *pluginType;
@property (copy, nonatomic) NSString *aspectName;
@property (copy, nonatomic) NSString *entryName;
@property (retain, nonatomic) SECStopWatch *stopWatch;
@property (retain, nonatomic) SECStopWatch *pluginProfiler;
@property (copy, nonatomic) NSString *tracingPhase;

- (id)metricsDict;
- (id)initWithPluginType:(id)a0 aspectName:(id)a1 entryName:(id)a2;
- (void)startPhase:(id)a0;
- (void)startPlugin:(id)a0;
- (void)endPlugin;
- (void).cxx_destruct;
- (void)pause;
- (void)end;

@end
