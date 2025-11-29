@class NSString;

@interface AFDSchoolStoryActivityModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *activityImageURL;
@property (copy, nonatomic) NSString *activitySchema;
@property (nonatomic) long long activityDailyShowCount;
@property (nonatomic) BOOL isFirstShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
