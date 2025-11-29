@class NSMutableDictionary, CADisplayLink;

@interface IESECPdpUxMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *pdpUxMonitorDic;
@property long long last;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL pdpFirstPaintTriggerOverflow;

+ (id)sharedManager;

- (void)traceAfterRunLoop:(long long)a0 complete:(id /* block */)a1;
- (void)addUxMonitorWithDic:(id)a0;
- (void)addUxMonitorWithPoint:(id)a0;
- (id)generatePerfDic;
- (void)clearUxMonitorDic;
- (void)triggerPdpFirstPaintOverflow;
- (id)generateUxDic;
- (void)addUxMonitorDicWithWhScale:(double)a0 didHitPDPHalfOptimize:(BOOL)a1 type:(long long)a2 stage:(long long)a3;
- (double)caculatePicLoadDurationWithPicReturnTime:(double)a0 showTime:(double)a1;
- (void)generatePicCompare;
- (BOOL)pdpFirstPaintOverflow;
- (void).cxx_destruct;
- (void)stopDisplayLink;

@end
