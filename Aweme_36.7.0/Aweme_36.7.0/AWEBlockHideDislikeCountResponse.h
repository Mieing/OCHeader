@class NSDictionary, AWEPrivateListSettingsModel;

@interface AWEBlockHideDislikeCountResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEPrivateListSettingsModel *blockListSettings;
@property (retain, nonatomic) AWEPrivateListSettingsModel *hideMyPostSettings;
@property (retain, nonatomic) AWEPrivateListSettingsModel *hideHerPostSettings;
@property (retain, nonatomic) AWEPrivateListSettingsModel *recentlyDislikeListSettings;
@property (retain, nonatomic) AWEPrivateListSettingsModel *notShow24StoryListSettings;
@property (retain, nonatomic) AWEPrivateListSettingsModel *notSee24StoryListSettings;
@property (retain, nonatomic) AWEPrivateListSettingsModel *notShowInclude24storyListSettings;
@property (retain, nonatomic) AWEPrivateListSettingsModel *notSeeInclude24storyListSettings;
@property (retain, nonatomic) NSDictionary *activeVisibilitySettings;

+ (id)blockListSettingsJSONTransformer;
+ (id)hideMyPostSettingsJSONTransformer;
+ (id)recentlyDislikeListSettingsJSONTransformer;
+ (id)notShow24StoryListSettingsJSONTransformer;
+ (id)notSee24StoryListSettingsJSONTransformer;
+ (id)notShowInclude24storyListSettingsJSONTransformer;
+ (id)notSeeInclude24storyListSettingsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
