@class HTSLiveTurnOverCameraContent, HTSLiveSwitchFullSongStatusContent, HTSLiveSwitchSceneContent, HTSLiveSwitchUserStatusContent, HTSLiveSendSignalContent, HTSLiveSwitchConcertVolumeContent, HTSLiveSwitchKtvModeContent, HTSLiveSwitchLyricStatusContent, HTSLiveCommon, HTSLiveSwitchAvatarActionContent, HTSLivePrepareDownloadSongMaterialsContent, HTSLiveSwitchAvatarContent, HTSLiveSwitchEarphoneMonitorContent, HTSLiveSwitchTuningEffectContent, HTSLiveSwitchSongVolumeContent, HTSLiveKtvEffectDegradeContent, HTSLiveInitLinkmicContent, HTSLiveSwitchAvatarVADModeContent;

@interface HTSLiveLinkmicBigEventMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int msgType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveInitLinkmicContent *initLinkmicContent;
@property (retain, nonatomic) HTSLiveSwitchSceneContent *switchSceneContent;
@property (retain, nonatomic) HTSLiveSwitchEarphoneMonitorContent *switchEarphoneMonitorContent;
@property (retain, nonatomic) HTSLiveSwitchKtvModeContent *switchKtvModeContent;
@property (retain, nonatomic) HTSLiveSwitchLyricStatusContent *switchLyricStatusContent;
@property (retain, nonatomic) HTSLiveSwitchFullSongStatusContent *switchFullSongStatusContent;
@property (retain, nonatomic) HTSLiveSwitchTuningEffectContent *switchTuningEffectContent;
@property (retain, nonatomic) HTSLiveSwitchSongVolumeContent *switchSongVolumeContent;
@property (retain, nonatomic) HTSLiveKtvEffectDegradeContent *ktvEffectDegradeContent;
@property (retain, nonatomic) HTSLivePrepareDownloadSongMaterialsContent *prepareDownloadSongMaterialsContent;
@property (retain, nonatomic) HTSLiveSwitchAvatarContent *switchAvatarContent;
@property (retain, nonatomic) HTSLiveSwitchAvatarActionContent *switchAvatarActionContent;
@property (retain, nonatomic) HTSLiveSwitchAvatarVADModeContent *switchAvatarVadModeContent;
@property (retain, nonatomic) HTSLiveSwitchUserStatusContent *switchUserStatusContent;
@property (retain, nonatomic) HTSLiveTurnOverCameraContent *turnOverCameraContent;
@property (retain, nonatomic) HTSLiveSendSignalContent *sendSignalContent;
@property (retain, nonatomic) HTSLiveSwitchConcertVolumeContent *switchConcertVolumeContent;

+ (id)descriptor;

@end
