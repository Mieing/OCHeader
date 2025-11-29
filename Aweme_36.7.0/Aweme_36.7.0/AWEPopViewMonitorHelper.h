@interface AWEPopViewMonitorHelper : NSObject

@property (nonatomic) long long transitionCount;
@property (nonatomic) double startTransitionTime;
@property (nonatomic) BOOL reportCloseExceptionWhenTransition;

+ (id)sharedManager;

- (void)startMonitorUnCloseAfterUserOperate:(id)a0;
- (void)startMonitorUnCloseAfterTransitionWithToViewController:(id)a0;
- (void)startMonitorUnCloseAfterTabChange;

@end
