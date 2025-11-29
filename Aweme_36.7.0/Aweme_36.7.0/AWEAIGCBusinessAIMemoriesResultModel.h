@class NSString, NSArray, NSDictionary;

@interface AWEAIGCBusinessAIMemoriesResultModel : AWEAIGCBaseBusinessCustomModel

@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) long long taskStatus;
@property (copy, nonatomic) NSString *memoryEffectID;
@property (copy, nonatomic) NSString *storyTemplateID;
@property (copy, nonatomic) NSString *storyPrivateTemplateID;
@property (copy, nonatomic) NSString *storyTemplateMusic;
@property (copy, nonatomic) NSString *storyTTSSpeakerID;
@property (copy, nonatomic) NSArray *musicKeyframe;
@property (copy, nonatomic) NSDictionary *musicKeyframeFadeInOut;
@property (nonatomic) double musicBgmVolume;
@property (copy, nonatomic) NSString *editProjectName;
@property (copy, nonatomic) NSString *storyNarrativeStylePromptKey;
@property (copy, nonatomic) NSString *storyMusicTag;
@property (copy, nonatomic) NSString *topicID;
@property (copy, nonatomic) NSString *topicName;
@property (copy, nonatomic) NSString *coverUri;
@property (copy, nonatomic) NSString *collectionID;
@property (copy, nonatomic) NSString *collectionName;
@property (copy, nonatomic) NSArray *assetIDList;
@property (nonatomic) long long generateScene;

- (void).cxx_destruct;

@end
