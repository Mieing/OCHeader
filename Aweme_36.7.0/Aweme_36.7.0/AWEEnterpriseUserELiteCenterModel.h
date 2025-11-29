@class NSString, NSArray;

@interface AWEEnterpriseUserELiteCenterModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *recommendTarget;
@property (copy, nonatomic) NSArray *candidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)candidatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
