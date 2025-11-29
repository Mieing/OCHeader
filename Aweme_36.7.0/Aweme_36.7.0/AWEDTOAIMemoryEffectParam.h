@class NSString, NSArray, AWEDTOAIMemoryMusicFadeInOut, AWEDTOAIMemorySpeakerId;

@interface AWEDTOAIMemoryEffectParam : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *memoryEffectId;
@property (copy, nonatomic) NSString *storyTemplateId;
@property (copy, nonatomic) NSString *storyPrivateTemplateId;
@property (copy, nonatomic) NSString *storyTemplateMusic;
@property (retain, nonatomic) AWEDTOAIMemorySpeakerId *storyTtsSpeakerId;
@property (copy, nonatomic) NSArray *musicKeyframe;
@property (copy, nonatomic) NSString *template;
@property (copy, nonatomic) NSString *storyNarrativeStylePromptKey;
@property (retain, nonatomic) AWEDTOAIMemoryMusicFadeInOut *musicKeyframeFadeInOut;
@property (nonatomic) double musicBgmVolume;
@property (copy, nonatomic) NSString *storyMusicTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storyTtsSpeakerIdJSONTransformer;
+ (id)musicKeyframeJSONTransformer;
+ (id)musicKeyframeFadeInOutJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
