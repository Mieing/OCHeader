@class NSString, AnimaXMonitorUrlHolder;

@interface LynxAnimaXMonitorService : NSObject <AnimaXMonitorService>

@property (nonatomic) int instanceId;
@property (copy, nonatomic) NSString *pageUrl;
@property (readonly, nonatomic) AnimaXMonitorUrlHolder *urlHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportEvent:(id)a0 params:(id)a1;
- (void)reportPerformance:(id)a0;
- (id)appendURLInfo:(id)a0;
- (id)initWithLynxUIContext:(id)a0;
- (void).cxx_destruct;
- (void)reportError:(id)a0;

@end
