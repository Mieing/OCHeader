@interface AWEPerfEnergyHelper : NSObject

@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL stopRecordGPU;

+ (double)gpuUsage;
+ (id)getInvokeNameFromBlock:(struct AWEPerfEnergyBlockLiteral { void *x0; int x1; int x2; void /* function */ *x3; struct AWEPerfEnergyBlockDescriptor *x4; } *)a0;
+ (id)sharedHelper;

- (double)gpuUsage;
- (void)onAppEnterBackground;
- (void)onAppDidActive;
- (id)init;

@end
