@class NSArray, NSString;

@interface IESECShopImagePreloadConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *imageUrls;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
