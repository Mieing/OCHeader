@interface VEGlobalConfig : NSObject

@property (nonatomic) BOOL repeatAudioWhenCreatePlayerItem;
@property (nonatomic) BOOL adjustVolumeInMixPlayer;
@property (nonatomic) BOOL enablePreviewImageHM;
@property (nonatomic) BOOL replayInRecoder;
@property (nonatomic) BOOL forceMattingDetectModelInPreview;
@property (nonatomic) BOOL forceOldAlgorithmTextureInPreview;
@property (nonatomic) BOOL frameBufferAlphaPremultipliedFirst;
@property (nonatomic) BOOL forceReloadInSetSticker;
@property (nonatomic) BOOL enableAddFillModeFilter;
@property (nonatomic) BOOL forbidFetchAudioSession;
@property (nonatomic) BOOL disableAmazingInfosticker;
@property (nonatomic) BOOL disableEffectRTReuse;
@property (nonatomic) BOOL disableForceStopCameraCapture;
@property (nonatomic) BOOL enableMVDurationOpt;
@property (nonatomic) BOOL forceUseNewAudioPlayerInRecorder;
@property (nonatomic) BOOL enableCrossplatInputCompileByDefault;
@property (nonatomic) BOOL enableMVSubTrackVolumeControl;

+ (id)share;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setupCategoryConfig;
- (id)init;

@end
