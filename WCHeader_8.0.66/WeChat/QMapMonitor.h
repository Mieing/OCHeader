@class QDrawMonitor;

@interface QMapMonitor : NSObject

@property (retain, nonatomic) QDrawMonitor *drawMonitor;

- (id)init;
- (void)dealloc;
- (void)onBeforeDrawframe;
- (void)onAfterDrawframeWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
