@class NSArray, NSString;

@interface AWESearchAnchorUIInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *textsModel;
@property (copy, nonatomic) NSArray *iconsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textsModelJSONTransformer;
+ (id)iconsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
