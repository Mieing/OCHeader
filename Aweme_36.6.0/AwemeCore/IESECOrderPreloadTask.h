@class NSString, NSDictionary;

@interface IESECOrderPreloadTask : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *preloadUrl;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *preloadBizScene;
@property (nonatomic) long long strategy;
@property (nonatomic) unsigned long long renderType;
@property (copy, nonatomic) NSDictionary *subPreloadResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
