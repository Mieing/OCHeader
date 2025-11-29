@class AnimaXMonitorUrlHolder, NSString;

@interface DefaultAnimaXMonitorService : NSObject <AnimaXMonitorService>

@property (readonly, nonatomic) AnimaXMonitorUrlHolder *urlHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportPerformance:(id)a0;
- (id)getBaseCategory;
- (void)reportWithName:(id)a0 category:(id)a1 metric:(id)a2;
- (void)reportError:(id)a0;

@end
