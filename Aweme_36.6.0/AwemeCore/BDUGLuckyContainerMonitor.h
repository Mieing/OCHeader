@class NSString, NSMutableDictionary;

@interface BDUGLuckyContainerMonitor : NSObject <BDXMonitorInterceptor>

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupContainerMonitorModule;
+ (id)sharedInstance;

- (void)containerDidLoadFailedWithURLString:(id)a0;
- (void)containerDidPageReadyWithURLString:(id)a0;
- (void)xMonitor:(id)a0 didReportWithEventName:(id)a1 bizTag:(id)a2 commonParams:(id)a3 metric:(id)a4 category:(id)a5 extra:(id)a6 platform:(long long)a7 aid:(id)a8 maySample:(BOOL)a9 urlString:(id)a10;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)report:(id)a0;

@end
