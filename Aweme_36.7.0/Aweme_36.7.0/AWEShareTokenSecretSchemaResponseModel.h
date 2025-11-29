@class NSString, AWEShareTokenSecretSchemaDataResponseModel;

@interface AWEShareTokenSecretSchemaResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long st;
@property (copy, nonatomic) NSString *msg;
@property (retain, nonatomic) AWEShareTokenSecretSchemaDataResponseModel *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
