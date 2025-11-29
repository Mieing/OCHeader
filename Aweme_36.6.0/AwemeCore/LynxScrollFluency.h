@class NSString, LynxFluencyMonitor;

@interface LynxScrollFluency : NSObject <LynxScrollListener> {
    LynxFluencyMonitor *_fluencyMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)constructFluencyConfigWithLynxScrollInfo:(id)a0;

- (void)scrollerWillBeginDragging:(id)a0;
- (void)scrollerDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollerDidEndDecelerating:(id)a0;
- (BOOL)shouldSendAllScrollEvent;
- (void)setEnabledBySampling:(long long)a0;
- (void)setPageConfigProbability:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
