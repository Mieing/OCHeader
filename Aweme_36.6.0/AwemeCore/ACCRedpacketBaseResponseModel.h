@class NSString;

@interface ACCRedpacketBaseResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) id data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)responseDataJSONTransformerClass;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
