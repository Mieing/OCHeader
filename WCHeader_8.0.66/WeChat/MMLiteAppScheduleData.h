@class NSString;

@interface MMLiteAppScheduleData : NSObject <PBCoding>

@property (nonatomic) int interval;
@property (nonatomic) int repeat;
@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSString *actionPayload;
@property (nonatomic) BOOL forceDispatch;
@property (nonatomic) int aliveDurationSeconds;
@property (nonatomic) long long lastTriggerTime;
@property (nonatomic) long long setTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_interval;
+ (void)PBArrayAdd_repeat;
+ (void)PBArrayAdd_actionName;
+ (void)PBArrayAdd_actionPayload;
+ (void)PBArrayAdd_forceDispatch;
+ (void)PBArrayAdd_aliveDurationSeconds;
+ (void)PBArrayAdd_lastTriggerTime;
+ (void)PBArrayAdd_setTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
