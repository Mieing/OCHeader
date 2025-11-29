@class NSString, NSDictionary;

@interface AWEIMDisplayNameModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *en;
@property (copy, nonatomic) NSString *local;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (id)currentDisplayName;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
