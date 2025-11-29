@class NSString;

@interface AWEIMTextTriggerAnimationInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long version;
@property (nonatomic) long long weight;
@property (nonatomic) long long beginIndex;
@property (nonatomic) BOOL inAdvance;
@property (copy, nonatomic) NSString *triggerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
