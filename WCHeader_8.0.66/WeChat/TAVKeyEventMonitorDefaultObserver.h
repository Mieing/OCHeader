@class NSString;

@interface TAVKeyEventMonitorDefaultObserver : NSObject <TAVKeyEventMonitorObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)logRenderFinish:(id)a0;
- (void)logExportFinish:(id)a0;
- (void)reportWithParam:(id)a0;

@end
