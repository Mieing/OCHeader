@class NSString, NSDictionary;

@interface AWEShareActionSetting : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
