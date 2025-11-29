@class NSString, NSDictionary;

@interface AWELiveSkylightDynamicConfigManager : NSObject

@property (nonatomic) long long skylightLiveExistDays;
@property (copy, nonatomic) NSString *existDaysLastModifyDate;
@property (nonatomic) long long skylightLiveClickDays;
@property (copy, nonatomic) NSString *clickDaysLastModifyDate;
@property (nonatomic) unsigned long long userLiveActivityStatus;
@property (copy, nonatomic) NSDictionary *daysSettings;
@property (nonatomic) BOOL isNeedDynamicConfigSkylightTitle;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)dynamicConfigCapsuleTitle:(long long)a0;
- (id)getStoregeKeyWithOriginKey:(id)a0;
- (id)dynamicConfigUnreadUpTitle:(long long)a0;
- (id)userLiveActivityStatusFullKey;
- (id)skylightLiveExistDaysFullKey;
- (id)existDaysLastModifyDateFullKey;
- (void)resetSkylightSortConfigLogic;
- (id)skylightLiveClickDaysFullKey;
- (id)clickDaysLastModifyDateFullKey;
- (unsigned long long)getUserLiveActivityStatus;
- (void)processLiveExistDays;
- (void)processLiveClickDays;
- (id)dynamicConfigUnreadDownTitle:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
