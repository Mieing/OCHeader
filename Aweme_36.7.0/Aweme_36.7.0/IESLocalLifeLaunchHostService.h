@class NSString;

@interface IESLocalLifeLaunchHostService : HTSService <IESLocalLifeLaunchHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)premainTask;
+ (void)staticLoadTask;
+ (void)didLaunchTask;
+ (void)firstFrameTask;


@end
