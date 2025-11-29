@class NSString, NSArray, NSDictionary;

@interface AWEVideoInteractInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *activityName;
@property (nonatomic) long long userState;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *activityBtnList;
@property (nonatomic) double nowTimeStamp;
@property (copy, nonatomic) NSDictionary *eventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityBtnListJSONTransformer;
+ (id)eventDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
