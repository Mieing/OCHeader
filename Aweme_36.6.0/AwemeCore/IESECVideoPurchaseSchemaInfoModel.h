@class NSString;

@interface IESECVideoPurchaseSchemaInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *openSKUSchema;
@property (copy, nonatomic) NSString *submitOrderSchema;
@property (copy, nonatomic) NSString *groupBuyOpenSKUSchema;
@property (copy, nonatomic) NSString *groupBuySubmitOrderSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
