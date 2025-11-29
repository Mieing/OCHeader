@class NSArray;

@interface AWEMessageReachInterceptedComponentManager : NSObject

@property (nonatomic) BOOL isReshowing;
@property (retain, nonatomic) NSArray *interceptedTasksArray;

+ (id)sharedManager;

- (void)reshowInterceptedComponent;
- (void)clearInterceptedComponentWithChannelID:(id)a0;
- (void)recordInterceptedComponentWithTask:(id)a0;
- (void)updateInterceptedTasksArrayWithTask:(id)a0;
- (void)reshowAndClearInterceptedComponent;
- (void)clearAllInterceptedComponent;
- (BOOL)shouldClearInterceptedComponentWithTask:(id)a0 channelID:(id)a1;
- (BOOL)shouldReshowInterceptedComponentInCurrentAppEnvironmentWithTask:(id)a0;
- (void)reshowInterceptedComponentTask:(id)a0;
- (id)generateInterceptedComponentParamsWithTask:(id)a0;
- (BOOL)isDialogAndPushCountReachLimitWithTask:(id)a0;
- (BOOL)shouldAddTask:(id)a0 oldTask:(id)a1;
- (BOOL)shouldRemoveOldTask:(id)a0 withNewTask:(id)a1;
- (void).cxx_destruct;
- (void)setup;

@end
