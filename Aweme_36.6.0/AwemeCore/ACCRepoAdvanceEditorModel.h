@class NSString, NSArray, ACCAEHasEditedModel;
@protocol ACCPublishRepository;

@interface ACCRepoAdvanceEditorModel : NSObject <ACCRepoDataDiff, AWERepositoryDraftProtocol, NSCopying, ACCRepositoryContextDeprecated, ACCRepoAdvanceEditorData, ACCRepoRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *audioEditTipTitle;
@property (readonly, copy, nonatomic) NSArray *userEditAudioAssets;
@property (readonly, nonatomic) BOOL userEditAudioAssetsMuted;
@property (copy, nonatomic) NSString *advanceMusicTrackJson;
@property (nonatomic) BOOL isAdvancedEditDraft;
@property (nonatomic, getter=isEditingOnAdvancedEditPage) BOOL editingOnAdvancedEditPage;
@property (nonatomic) BOOL isAdvanceEdit;
@property (nonatomic) BOOL isAdvanceEditStrict;
@property (retain, nonatomic) ACCAEHasEditedModel *hasEditedModel;
@property (nonatomic) BOOL advanceEditShouldUpdateToSoundFX;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (BOOL)isAdvancedEditLiveDraftOn;
- (id)editDiffs;
- (BOOL)__isAdvancedEditOn;
- (BOOL)isAdvanceEditUpgradesOn;
- (id)_userEditAudioTrackSlot;
- (id)_nleVideoData;
- (BOOL)isAdvancedEditOn;
- (BOOL)isSupportMigrate;
- (id)updatedTrackParams;
- (BOOL)hasAnyAdvanceEffectsWithPublishViewModel:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
