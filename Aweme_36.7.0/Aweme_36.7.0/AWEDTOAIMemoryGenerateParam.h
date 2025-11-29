@class NSString, NSArray;

@interface AWEDTOAIMemoryGenerateParam : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *topicId;
@property (copy, nonatomic) NSString *topicName;
@property (copy, nonatomic) NSArray *assetIdList;
@property (nonatomic) long long generateScene;
@property (copy, nonatomic) NSString *collectionId;
@property (copy, nonatomic) NSString *collectionName;
@property (copy, nonatomic) NSString *useMusicId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
