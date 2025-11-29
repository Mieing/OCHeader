@class NSDictionary, NSString;

@interface IESECGoodsDetailMemoryCacheSettings : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL optimizeOn;
@property (retain, nonatomic) NSDictionary *sceneIDDict;
@property (nonatomic) long long defaultTime;
@property (nonatomic) long long cacheNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
