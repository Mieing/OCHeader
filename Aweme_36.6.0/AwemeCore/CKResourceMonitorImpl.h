@protocol CKResourceMonitorDelegate;

@interface CKResourceMonitorImpl : NSObject

@property (weak, nonatomic) id<CKResourceMonitorDelegate> delegate;

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (void)injectMonitorImplementation:(id)a0;
+ (id)sharedManager;

- (void).cxx_destruct;

@end
