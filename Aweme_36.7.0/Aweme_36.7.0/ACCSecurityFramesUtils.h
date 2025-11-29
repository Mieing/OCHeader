@interface ACCSecurityFramesUtils : NSObject

+ (double)uploadFramesInterval;
+ (struct CGSize { double x0; double x1; })framesResolution;
+ (double)recordFramesInterval;
+ (void)showACCMonitorAlertWithErrorCode:(long long)a0;
+ (double)framesCompressionRatio;
+ (struct CGSize { double x0; double x1; })framesResolutionWithType:(unsigned long long)a0;
+ (id)errorMessageWithErrorCode:(long long)a0;
+ (struct CGSize { double x0; double x1; })highHramesResolution;
+ (id)errorWithErrorCode:(long long)a0;

@end
