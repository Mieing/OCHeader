@class NSString;

@interface AWELifeShelfCardListItemBrandLabel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *labelSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
