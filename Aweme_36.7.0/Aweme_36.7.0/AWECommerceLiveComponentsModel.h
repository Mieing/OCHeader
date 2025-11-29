@class NSArray, NSString;

@interface AWECommerceLiveComponentsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *adInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
