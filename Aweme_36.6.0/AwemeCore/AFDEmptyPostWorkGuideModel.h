@class NSString, AWEURLModel;

@interface AFDEmptyPostWorkGuideModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *challengeTitle;
@property (copy, nonatomic) NSString *challengeType;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *challengeSchema;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
