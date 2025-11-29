@interface VideoRingFileManager : NSObject

+ (id)GetRingMediaDir;
+ (id)GetDownloadRingMediaDir;
+ (id)GetDownloadRingCropedAudioFileDir;
+ (id)GetDownloadRingPathWithClientId:(id)a0;
+ (id)RingIdForFriend:(id)a0;
+ (id)GetFilePathForRingFile:(id)a0;
+ (id)RingToneSoundNameForCaller:(id)a0;
+ (id)GlobalRingToneSoundName;
+ (id)RingToneFilePathForCaller:(id)a0;
+ (id)GetRingVibrateFileDir;
+ (id)GetRingVibrateUsingFileDir;
+ (id)GetRingVibrateTempFileDir;
+ (id)GetRingVibrateTempFilePathWithClientId:(id)a0;
+ (id)GetRingVibrateUsingFilePathWithClientId:(id)a0;
+ (id)GetRingVibrateFilePathWithClientId:(id)a0;
+ (id)GetDefauleRingFileName;
+ (id)GetDefaultRingFilePath;
+ (BOOL)SetDefaultRingFromPath:(id)a0;
+ (BOOL)copyMsgRingToSoundsDir;
+ (id)GetGlobalRingFileName;
+ (id)GetGlobalRingFilePath;
+ (BOOL)RemoveGlobalRingFile;
+ (void)RemoveGlobalRingFileIfExistForReason:(id)a0;
+ (BOOL)HasGlobalRingFile;
+ (BOOL)SetGlobalRingFromPath:(id)a0;
+ (id)GetExclusiveRingFileNameForFriend:(id)a0;
+ (id)GetExclusiveRingFilePathForFriend:(id)a0;
+ (BOOL)RemoveExclusiveRingFileForFriend:(id)a0;
+ (void)RemoveExclusiveRingFileIfExistForFriend:(id)a0 reason:(id)a1;
+ (BOOL)HasExclusiveRingFileForFriend:(id)a0;
+ (BOOL)SetExclusiveRingForFriend:(id)a0 FromPath:(id)a1;
+ (void)CopyRingFile:(id)a0 toEffectPathForRing:(id)a1;
+ (unsigned long long)getFileNumOfSounds;

@end
