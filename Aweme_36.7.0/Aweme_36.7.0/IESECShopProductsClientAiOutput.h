@class NSDictionary, NSString;

@interface IESECShopProductsClientAiOutput : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long code;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSDictionary *pitayaAlgInfo;
@property (copy, nonatomic) NSString *reqID;
@property (nonatomic) long long result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
