@class NSString;

@interface AWEIMServiceService : HTSService <AWEIMServiceService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)performanceTrackerWithEvent:(id)a0 scene:(id)a1;
+ (id)networkPerformanceTrackerWithEvent:(id)a0 scene:(id)a1;
+ (BOOL)shouldTrackWithSampleRate:(double)a0;

- (void)setIMStorageWithInteger:(long long)a0 key:(id)a1;
- (long long)getIMStorageIntegerForKey:(id)a0;

@end
