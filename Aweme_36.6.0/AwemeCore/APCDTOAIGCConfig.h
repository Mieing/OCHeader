@class NSString;

@interface APCDTOAIGCConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long aiScene;
@property (copy, nonatomic) NSString *aiEntrance;
@property (copy, nonatomic) NSString *externalUid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aiSceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
