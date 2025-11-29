@class NSString, NSArray;

@interface AWEShareVerifySecretSchemaResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long st;
@property (copy, nonatomic) NSString *msg;
@property (nonatomic) BOOL isPassVerified;
@property (copy, nonatomic) NSArray *unsafeIds;
@property (copy, nonatomic) NSArray *unsafeParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
