@class NSString;

@interface AWEAntiAddictTimeManageInfoModel : MTLModel <MTLJSONSerializing>

@property long long remindToRest;
@property long long remindToSleep;
@property long long addictRemindState;
@property long long delayRemindTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)private_setAddictRemindState:(long long)a0;
- (void)private_setRemindToRest:(long long)a0;
- (void)private_setRemindToSleep:(long long)a0;
- (void)private_setDelayRemindTime:(long long)a0;
- (id)initWithRemindToRest:(long long)a0 remindToSleep:(long long)a1 addictRemindState:(long long)a2;

@end
