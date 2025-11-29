@class NSString, NSArray;

@interface AWEEnterpriseCustomerServiceModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long aweType;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSArray *templateAry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
