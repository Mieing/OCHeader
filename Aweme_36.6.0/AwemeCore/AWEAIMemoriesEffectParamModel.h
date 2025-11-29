@class NSString, NSArray, NSDictionary, AWEAIMemoriesSpeakerId;

@interface AWEAIMemoriesEffectParamModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSString *memoryEffectID;
@property (copy, nonatomic) NSString *storyTemplateID;
@property (copy, nonatomic) NSString *storyPrivateTemplateID;
@property (copy, nonatomic) NSString *storyTemplateMusic;
@property (copy, nonatomic) AWEAIMemoriesSpeakerId *storyTTSSpeakerID;
@property (copy, nonatomic) NSArray *musicKeyframe;
@property (copy, nonatomic) NSDictionary *musicKeyframeFadeInOut;
@property (nonatomic) double musicBgmVolume;
@property (copy, nonatomic) NSString *template;
@property (copy, nonatomic) NSString *storyNarrativeStylePromptKey;
@property (copy, nonatomic) NSString *storyMusicTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicKeyframeJSONTransformer;
+ (id)storyTTSSpeakerIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
