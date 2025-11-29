@class NSString;
@protocol CGXPerformanceDelegate;

@interface CGXPerformanceModuleBridge : NSObject <CGXModuleProtocol> {
    void *nativeModule_;
    struct CGXPerformanceListener { void /* function */ **x0; id x1; } *listener;
}

@property (weak, nonatomic) id<CGXPerformanceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPerformanceData:(id)a0;
- (void)setPerformanceListener:(id)a0;
- (void)onNetWorkQualityWithInt:(long long)a0 rtt:(long long)a1;
- (void)initModule:(void *)a0;
- (void)uninitModule;
- (void).cxx_destruct;

@end
