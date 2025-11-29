@class NSString;

@interface IESLivePanelInfo : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (weak, nonatomic) id container;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *needEnqueue;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) unsigned long long priorityLevel;
@property (nonatomic) long long dailyLimit;
@property (nonatomic) long long minInterval;
@property (nonatomic) long long lifetimeLimit;
@property (copy, nonatomic) NSString *activityId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
