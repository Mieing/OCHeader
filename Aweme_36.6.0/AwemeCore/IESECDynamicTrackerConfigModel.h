@class NSString;

@interface IESECDynamicTrackerConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *function;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *createTime;
@property (copy, nonatomic) NSString *salt;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *hashAlgorithm;
@property (nonatomic) int parameterCnt;
@property (copy, nonatomic) NSString *rule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;

@end
