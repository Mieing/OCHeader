@interface DUXBuryPointTool : NSObject

+ (void)setupToastTrackBlock:(id /* block */)a0;
+ (void)setupUpLoadBuryPointBlock:(id /* block */)a0;
+ (void)uploadBuryPointWithEvent:(id)a0 andParams:(id)a1;
+ (BOOL)isNilToastTrackBlock;
+ (void)toastTrackEvent:(id)a0 withToast:(id)a1;

@end
