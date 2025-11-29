@class NSNumber, NSString;

@interface BDXPrefetchRequestParam : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id value;
@property (retain, nonatomic) NSNumber *required;
@property (nonatomic) BOOL enableAppIdIsolation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
