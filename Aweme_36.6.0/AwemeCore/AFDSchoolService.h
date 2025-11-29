@class NSString, AFDProfileSchoolExtensionAlert;

@interface AFDSchoolService : HTSService <AFDSchoolService>

@property (retain, nonatomic) NSString *currentSchoolID;
@property (nonatomic) BOOL hasMainFeedSchoolTab;
@property (retain, nonatomic) AFDProfileSchoolExtensionAlert *schoolExtensionAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)profileExtensionAreaCardControllerClass;
- (id)defaultSchoolImage;
- (id)IMSkylightTagImage;
- (id)profileTagImage;
- (void)gotoSchoolStoryWithSource:(unsigned long long)a0 schoolID:(id)a1 schoolName:(id)a2 awemeID:(id)a3 enterFrom:(id)a4;
- (void)switchUserSetting:(BOOL)a0 completion:(id /* block */)a1;
- (void)shootSchoolStory;
- (void)showProfileExtensionSchoolPanelFromVerify:(BOOL)a0;
- (BOOL)shouldShowProfileSchoolExtension;
- (id)storageKeyForProfileHintPanel;
- (id)makeSchoolStoryShootButton;
- (void)updateSchoolStoryShootButton:(id)a0 context:(id)a1;
- (id)schoolCircleExtraTrackInfoWithAweme:(id)a0;
- (id)schoolCircleTagsTrackInfoWithAweme:(id)a0 actionType:(id)a1 enterFrom:(id)a2;
- (id)publishButtonTitle;
- (void)p_gotoOuterStoryWithSchool:(id)a0 name:(id)a1 source:(unsigned long long)a2 awemeID:(id)a3 enterFrom:(id)a4;
- (BOOL)isSchoolCircleEnabled;
- (void)p_showProfileExtensionHintPanel;
- (void)videoDetailShootSchoolStory:(id)a0;
- (void).cxx_destruct;
- (id)settingsTitle;

@end
