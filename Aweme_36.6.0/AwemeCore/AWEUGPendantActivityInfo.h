@class NSNumber, NSString, NSDictionary;

@interface AWEUGPendantActivityInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *resourceId;
@property (copy, nonatomic) NSString *materialId;
@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) double activityStartTime;
@property (nonatomic) double activityEndTime;
@property (nonatomic) double taskStartTime;
@property (nonatomic) double taskEndTime;
@property (nonatomic) double realStartTime;
@property (nonatomic) long long activityType;
@property (nonatomic) long long activityTaskType;
@property (nonatomic) long long priorityLevel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *flowerRid;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) long long dynamicSettingsVersionId;
@property (copy, nonatomic) NSDictionary *commonTrackingParamsForDynamicSettings;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
