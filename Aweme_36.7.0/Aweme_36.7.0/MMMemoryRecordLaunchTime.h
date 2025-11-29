@interface MMMemoryRecordLaunchTime : NSObject

@property (nonatomic) unsigned long long lastSessionLaunchTime;
@property (nonatomic) unsigned long long currentSessionLaunchTime;

+ (unsigned long long)readLaunchTime;
+ (void)writeLaunchTime:(unsigned long long)a0;
+ (id)shared;

- (void)onAppLaunch;

@end
