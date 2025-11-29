@class AWELiteTimerTaskCenter, NSString;

@interface AWELiteTimerTaskServiceImpl : HTSService <AWELiteTimerTaskService>

@property (retain, nonatomic) AWELiteTimerTaskCenter *center;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)onServiceLaunch;
- (id)taskCenter;
- (id)taskTimer;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
