@class NSString, NSArray;

@interface AWEHomePageRemoteModuleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *moduleType;
@property (nonatomic) long long column;
@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isModelValid;

@end
