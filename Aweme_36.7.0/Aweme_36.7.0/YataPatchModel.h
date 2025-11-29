@class NSString, NSArray;

@interface YataPatchModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *yataSession;
@property (copy, nonatomic) NSString *protocolID;
@property (retain, nonatomic) NSArray *operations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationsJSONTransformer;
+ (id)protocolIDJSONTransformer;
+ (id)yataSessionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
