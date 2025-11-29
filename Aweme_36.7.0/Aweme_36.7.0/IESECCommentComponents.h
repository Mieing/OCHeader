@class NSArray, NSString;

@interface IESECCommentComponents : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *topComponents;
@property (copy, nonatomic) NSArray *listComponents;
@property (copy, nonatomic) NSArray *floatComponents;
@property (copy, nonatomic) NSArray *multiPicComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topComponentsJSONTransformer;
+ (id)listComponentsJSONTransformer;
+ (id)floatComponentsJSONTransformer;
+ (id)multiPicComponentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
