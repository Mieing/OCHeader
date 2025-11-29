@class ICHBackgroundTaskConfig, NSMutableDictionary;
@protocol ICHBackgroundTaskDelegate;

@interface ICHBackgroundTaskMonitor : NSObject {
    ICHBackgroundTaskConfig *_config;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    NSMutableDictionary *_contexts;
}

@property (class, readonly) ICHBackgroundTaskMonitor *shared;

@property (weak, nonatomic) id<ICHBackgroundTaskDelegate> delegate;

- (void)startWithConfig:(id)a0;
- (void)backgroundTaskTimeoutWithIdentifier:(unsigned long long)a0;
- (void)backgroundTaskStartWithIdentifier:(unsigned long long)a0 taskName:(id)a1;
- (void)backgroundTaskEndWithIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;

@end
