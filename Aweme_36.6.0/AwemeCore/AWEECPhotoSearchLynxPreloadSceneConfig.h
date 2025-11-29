@class NSArray, NSString;

@interface AWEECPhotoSearchLynxPreloadSceneConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *searchEntranceList;
@property (nonatomic) BOOL isDefault;
@property (retain, nonatomic) NSArray *cellConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
