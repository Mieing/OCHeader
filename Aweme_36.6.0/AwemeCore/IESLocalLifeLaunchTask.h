@interface IESLocalLifeLaunchTask : NSObject

+ (void)premainTask;
+ (void)staticLoadTask;
+ (void)didLaunchTask;
+ (void)firstFrameTask;

@end
