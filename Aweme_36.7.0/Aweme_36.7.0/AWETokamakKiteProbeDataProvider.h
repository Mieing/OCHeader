@class NSString;

@interface AWETokamakKiteProbeDataProvider : NSObject <KiteProbeDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)memoryContext;
- (id)extraMemoryLog;
- (BOOL)isContextEnabled;
- (id)cpuContext;
- (id)gpuContext;

@end
