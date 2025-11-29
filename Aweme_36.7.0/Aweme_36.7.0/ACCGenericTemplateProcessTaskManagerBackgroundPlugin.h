@class NSMutableArray;
@protocol ACCGenericTemplateProcessTaskManagerBackgroundPluginDelegation;

@interface ACCGenericTemplateProcessTaskManagerBackgroundPlugin : NSObject

@property (retain, nonatomic) NSMutableArray *tasks;
@property (weak, nonatomic) id<ACCGenericTemplateProcessTaskManagerBackgroundPluginDelegation> delegate;

- (void)handleEnterBackground:(id)a0;
- (void)handleEnterForeground:(id)a0;
- (void)appendBackgroundTask:(id)a0;
- (void)resumeBackgroundTask;
- (BOOL)isAppInBackground;
- (void).cxx_destruct;
- (id)init;
- (void)setupNotifications;

@end
