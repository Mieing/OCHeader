@class NSString, NSDictionary;

@interface AWECampaignBaseTaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskIdentifier;
@property (copy, nonatomic) NSString *taskToken;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSString *inCompletePopup;
@property (copy, nonatomic) NSString *inCompleteText;
@property (copy, nonatomic) NSDictionary *buriedInfo;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) double firstInitTime;
@property (nonatomic) BOOL isCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
