@protocol CKResourceLoggerDelegate;

@interface CKResourceLoggerImpl : NSObject

@property (weak, nonatomic) id<CKResourceLoggerDelegate> delegate;

+ (void)injectLoggerImplementation:(id)a0;
+ (void)logInfo:(id)a0;
+ (void)logError:(id)a0;
+ (id)sharedManager;

- (void).cxx_destruct;

@end
