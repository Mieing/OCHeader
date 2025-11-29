@class NSString;

@interface APCDTOAIMemSearch : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *followTopicId;
@property (copy, nonatomic) NSString *followTopicName;
@property (copy, nonatomic) NSString *memoryEffectId;
@property (copy, nonatomic) NSString *storyTemplateId;
@property (copy, nonatomic) NSString *aiMemoryEditProject;
@property (copy, nonatomic) NSString *followMusicId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
