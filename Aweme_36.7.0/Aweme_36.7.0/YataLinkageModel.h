@class NSArray, NSDictionary, NSString;

@interface YataLinkageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *request;
@property (copy, nonatomic) NSArray *input;
@property (retain, nonatomic) NSDictionary *common;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestJSONTransformer;
+ (id)inputJSONTransformer;
+ (id)commonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
