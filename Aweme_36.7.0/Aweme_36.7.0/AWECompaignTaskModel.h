@class NSString, NSDictionary;

@interface AWECompaignTaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) long long time;
@property (nonatomic) long long taskType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
