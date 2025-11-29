@class NSString, NSDictionary;

@interface AWEShareWayConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *titleDic;
@property (copy, nonatomic) NSDictionary *iconDic;
@property (copy, nonatomic) NSDictionary *sortOperations;
@property (nonatomic) long long shareCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subSceneJSONTransformer;
+ (id)sortOperationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
