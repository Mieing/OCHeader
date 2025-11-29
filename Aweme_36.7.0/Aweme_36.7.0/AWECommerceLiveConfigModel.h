@class NSArray, NSString;

@interface AWECommerceLiveConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long configType;
@property (copy, nonatomic) NSArray *liveItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
