@class NSString;

@interface AWECloudBackgroundTaskUtility : NSObject {
    NSString *_name;
    unsigned long long _identifer;
    BOOL _isEnded;
}

+ (void)detachBackgroundTaskWithName:(id)a0 expireTime:(double)a1 task:(id /* block */)a2;
+ (id)currentBackgroundTask;
+ (void)detachBackgroundTaskWithName:(id)a0 task:(id /* block */)a1;
+ (void)endBackgroundTaskWithName:(id)a0;

- (void)completeBackgroundTask;
- (void)completeBackgroundTaskFromTimer:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
