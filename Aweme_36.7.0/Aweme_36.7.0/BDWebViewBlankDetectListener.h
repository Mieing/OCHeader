@class NSString;

@interface BDWebViewBlankDetectListener : BDHybridBaseMonitor <BDWebViewBlankDetectListenerDelegate, IESWebViewMonitorDelegate>

@property (retain, nonatomic) NSString *testString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)startMonitorWithClasses:(id)a0 setting:(id)a1;
+ (id)shareInstance;

- (void)reportDataBeforeLeave:(id)a0;
- (void)onDetectResult:(id)a0 isBlank:(BOOL)a1 detectType:(long long)a2 detectImage:(id)a3 error:(id)a4 costTime:(long long)a5;
- (void).cxx_destruct;

@end
