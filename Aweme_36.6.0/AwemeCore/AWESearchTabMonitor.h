@interface AWESearchTabMonitor : NSObject

+ (void)trackEventWithType:(long long)a0 extra:(id)a1;
+ (void)uploadTrackDataWithNum:(long long)a0 extra:(id)a1;
+ (void)trackEventWithType:(long long)a0;

@end
