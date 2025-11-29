@class NSString, NSSet, NSArray, NSDictionary;

@interface AWEPzComponentModel : MTLModel <MTLJSONSerializing, AWEPzComponentModelProtocol>

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSSet *cTags;
@property (copy, nonatomic) NSSet *sTags;
@property (copy, nonatomic) NSArray *strategies;
@property (copy, nonatomic) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cTagsJSONTransformer;
+ (id)sTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
