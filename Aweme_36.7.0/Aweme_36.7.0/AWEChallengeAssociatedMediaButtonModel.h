@class NSString, AWEURLModel;

@interface AWEChallengeAssociatedMediaButtonModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasPerchaseUrl;
@property (nonatomic) long long eid;
@property (nonatomic) long long aid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
