@class _TtC6WeChat27MMFinderLiveFPSPeriodResult;

@interface WeChat.MMFinderLiveFPSMonitor : NSObject {
    void /* unknown type, empty encoding */ interval;
    void /* unknown type, empty encoding */ commentScene;
    void /* unknown type, empty encoding */ callback;
    void /* unknown type, empty encoding */ link;
    void /* unknown type, empty encoding */ count;
    void /* unknown type, empty encoding */ lastTime;
    void /* unknown type, empty encoding */ avgFps;
    void /* unknown type, empty encoding */ fpsRecord;
}

@property (nonatomic, readonly) BOOL fpsSwitch;
@property (nonatomic, readonly) _TtC6WeChat27MMFinderLiveFPSPeriodResult *resultRecords;

- (id)initWithInterval:(double)a0 commentScene:(int)a1 callback:(id /* block */)a2;
- (void)start;
- (void)stop;
- (void)report;
- (void)tickWithLink:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
