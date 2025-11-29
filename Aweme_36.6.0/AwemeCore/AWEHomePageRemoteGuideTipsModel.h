@class NSString, NSArray, NSDictionary;

@interface AWEHomePageRemoteGuideTipsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *guideBubbleID;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSDictionary *guideTipsConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isModelValid;

@end
