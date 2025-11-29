@class NSArray, NSString;

@interface AWECommerceLivePushContentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *adInfos;
@property (copy, nonatomic) NSArray *liveItems;
@property (copy, nonatomic) NSString *componenteExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adInfosJSONTransformer;
+ (id)liveItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
