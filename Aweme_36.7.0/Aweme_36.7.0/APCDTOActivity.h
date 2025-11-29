@class NSString;

@interface APCDTOActivity : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *activityVideoType;
@property (copy, nonatomic) NSString *activityMobJson;
@property (copy, nonatomic) NSString *activityExtraJson;
@property (copy, nonatomic) NSString *activityFeedJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
