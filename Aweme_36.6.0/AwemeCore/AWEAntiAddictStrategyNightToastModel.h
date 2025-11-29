@class NSNumber, NSString;

@interface AWEAntiAddictStrategyNightToastModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSNumber *midnightRemindLiveTime;
@property (readonly, copy, nonatomic) NSNumber *midnightRemindTimeRange;
@property (readonly, copy, nonatomic) NSNumber *midnightRemindInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithMidnightRemindLiveTime:(long long)a0 midnightRemindTimeRange:(long long)a1 midnightRemindInterval:(long long)a2;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
