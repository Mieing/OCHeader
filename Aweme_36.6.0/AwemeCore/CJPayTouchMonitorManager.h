@class NSString;

@interface CJPayTouchMonitorManager : NSObject <CJPayTouchMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)setupTouchMonitor;

@end
