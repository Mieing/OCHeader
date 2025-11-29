@class AWEQuickStoryGuideConfigModel;

@interface AFDFriendsSettings : AWEBaseSettings

@property (retain, nonatomic) AWEQuickStoryGuideConfigModel *guideConfig;

+ (id)sharedInstance;

- (void)fetchSettings;
- (void)fetchSettingsWithContext:(id)a0;
- (void).cxx_destruct;
- (void)updateSettings:(id)a0;
- (id)init;

@end
