@interface AWEFeedActivityTimeManager : NSObject

+ (double)getCurrentServerTime;
+ (double)getNewCurrentServerTime;
+ (double)getCurrentServerTimeDefaultLocalTime;
+ (id)getActivityTimer;

@end
