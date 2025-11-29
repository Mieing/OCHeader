@class NSArray, NSString;

@interface AWEGoodsSKUSpec : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
