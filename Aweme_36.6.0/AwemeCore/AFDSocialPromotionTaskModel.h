@class NSString, NSDictionary;

@interface AFDSocialPromotionTaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *activityType;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long version;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL needPolling;
@property (copy, nonatomic) NSDictionary *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
