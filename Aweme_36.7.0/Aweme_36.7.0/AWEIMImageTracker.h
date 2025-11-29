@class AWEIMImageTrackerConfig;

@interface AWEIMImageTracker : NSObject

@property (nonatomic) long long startTime;
@property (retain, nonatomic) AWEIMImageTrackerConfig *config;

+ (id)trackerWithConfig:(id)a0;

- (void)finishWithResultType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
