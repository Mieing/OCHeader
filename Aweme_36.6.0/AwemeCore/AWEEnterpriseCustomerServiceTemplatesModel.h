@class NSString, NSArray;

@interface AWEEnterpriseCustomerServiceTemplatesModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateKey;
@property (copy, nonatomic) NSString *props;
@property (copy, nonatomic) NSArray *moduleAry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
