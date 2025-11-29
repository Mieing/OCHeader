@interface ACCAdvanceEditABConfig : NSObject

+ (BOOL)isUpgradesOn;
+ (id)advanceEditSupportSoundFXDict;
+ (id)advanceEditorResourcePreloadConfig;
+ (BOOL)isAdvancedEditLiveDraftOn;
+ (double)advanceEditLiveDraftSaveInterval;
+ (BOOL)audioShouldUpgradeToCombineAudio;
+ (BOOL)isAdvanceEditSupportSoundFX;
+ (BOOL)shouldKeepAddMusicTrackWhenHasAudio;
+ (BOOL)musicPickerEditMusicItemShowClipButton;
+ (BOOL)enablePreloadAudioWavePoints;
+ (BOOL)enablePreloadAdvanceEditorMusicPanel;
+ (BOOL)enablePreloadAdvanceEditorFilterPanel;
+ (BOOL)enablePreloadAdvanceEditorTransitionPanel;

@end
