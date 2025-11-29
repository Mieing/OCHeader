@class AWEMVScatterTaskScheduler;

@interface AWEMVLogUtils : NSObject

@property (retain, nonatomic) AWEMVScatterTaskScheduler *scatterTaskScheduler;

+ (void)logLevel:(unsigned long long)a0 message:(id)a1 subModule:(id)a2 fileName:(id)a3 lineNumber:(int)a4 funcName:(id)a5;
+ (void)suspendScatter:(BOOL)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
