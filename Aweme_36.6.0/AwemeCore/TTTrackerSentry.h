@class DataSentry, NSObject;
@protocol OS_dispatch_source;

@interface TTTrackerSentry : NSObject {
    NSObject<OS_dispatch_source> *timer;
}

@property (weak, nonatomic) DataSentry *sentry;
@property (nonatomic) double interval;

+ (id)share;
+ (void)startWithOptions:(id)a0;

- (id)currentFeatures;
- (void)logSentryEvent:(id)a0 response:(id)a1;
- (id)header;
- (void).cxx_destruct;
- (void)startTimer;
- (id)init;
- (void)setup;

@end
