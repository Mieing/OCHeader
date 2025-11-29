@class NSString;

@interface IESECMarketingUserActionLaunchDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL switchOn;
@property (nonatomic) long long ruleId;
@property (nonatomic) long long sceneId;
@property (nonatomic) double closeDuration;
@property (nonatomic) double startTimeStamp;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *scene;
@property (readonly, copy, nonatomic) NSString *sceneIdStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
