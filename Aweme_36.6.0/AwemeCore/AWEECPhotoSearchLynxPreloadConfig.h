@class NSArray, NSString;

@interface AWEECPhotoSearchLynxPreloadConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *cardConfigs;
@property (retain, nonatomic) NSArray *sceneConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardConfigsJSONTransformer;
+ (id)sceneConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
