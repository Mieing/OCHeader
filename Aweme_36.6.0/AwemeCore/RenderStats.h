@class NSMutableDictionary, Smooth, NSObject, Jank;
@protocol OS_dispatch_queue;

@interface RenderStats : NSObject

@property (nonatomic) long long frameReceiveCount;
@property (nonatomic) long long frameDropCount;
@property (nonatomic) long long frameRenderCount;
@property (nonatomic) long long frameReceiveIntervalMax;
@property (nonatomic) long long frameReceiveBlockDuration;
@property (nonatomic) long long frameRenderDelay;
@property (nonatomic) long long frameRenderIntervalMax;
@property (nonatomic) long long frameRenderElapse;
@property (nonatomic) long long frameRenderBlockDuration;
@property (nonatomic) long long frameRenderJank;
@property (nonatomic) long long frameRenderStutter;
@property (nonatomic) double frameRenderSmooth;
@property (nonatomic) long long frameOutCount;
@property (nonatomic) long long frameOutDropCount;
@property (nonatomic) long long frameOutElapse;
@property (retain, nonatomic) Jank *jank;
@property (retain, nonatomic) Smooth *smooth;
@property (nonatomic) long long lastFrameReceiveTime;
@property (nonatomic) long long lastFrameRenderTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) NSMutableDictionary *frameMap;
@property (retain, nonatomic) NSMutableDictionary *frameCallbackMap;
@property (retain, nonatomic) NSMutableDictionary *seiDetectMap;
@property (retain, nonatomic) NSMutableDictionary *llamaExternalRenderStats;

- (void)onFrameEndWithFrameId:(long long)a0 viewAvailable:(BOOL)a1;
- (id)_llamaFrameKeyWithIndex:(long long)a0 step:(id)a1;
- (void)resetFrameStats;
- (void)resetFrameCallbackStats;
- (void)onFrameReceiveWithFrameId:(long long)a0 timestamp:(long long)a1;
- (void)onFrameDropWithFrameId:(long long)a0;
- (void)onFrameStartWithFrameId:(long long)a0 timestamp:(long long)a1;
- (void)onFrameRenderWithFrameId:(long long)a0 timestamp:(long long)a1 sei:(id)a2;
- (void)onFrameCallbackStartWithFrameId:(long long)a0 timestamp:(long long)a1;
- (void)onFrameCallbackDrop;
- (void)onFrameCallbackEndWithFrameId:(long long)a0 timestamp:(long long)a1;
- (void)fl_externalRenderOnReceiveRenderTask:(long long)a0;
- (void)fl_externalRenderOnStartRenderTask:(long long)a0;
- (void)fl_externalRenderOnFinishedRenderTask:(long long)a0;
- (void)fl_getExternalRenderStatsWithFrameIndex:(long long)a0 result:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
