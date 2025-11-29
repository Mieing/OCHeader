@class NSString, NSArray;

@interface AWEAIMemoriesGenerateParamModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSString *topicID;
@property (copy, nonatomic) NSString *topicName;
@property (copy, nonatomic) NSString *collectionID;
@property (copy, nonatomic) NSString *collectionName;
@property (copy, nonatomic) NSArray *assetIDList;
@property (nonatomic) long long generateScene;
@property (copy, nonatomic) NSString *coverUri;
@property (copy, nonatomic) NSString *useMusicId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateSceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
