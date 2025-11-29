@interface VQMProfileInfoVisual : WXPBGeneratedMessage

@property (nonatomic) unsigned long long timestampCameraStartUpAtFirst;
@property (nonatomic) unsigned long long timestampCameraStartupSuccAtFirst;
@property (nonatomic) unsigned long long timestampRecvPlaybackAtFirst;
@property (nonatomic) unsigned long long timestampRecvRecordbackAtFirst;
@property (nonatomic) int errorCodeCameraStartUpFinalFailed;
@property (nonatomic) unsigned long long countCameraOutputFrames;
@property (nonatomic) unsigned long long countCameraDropFrames;
@property (nonatomic) int isRenderRciEnable;
@property (nonatomic) int isRenderRciEffectEnable;
@property (nonatomic) int dataRenderTickCamera;
@property (nonatomic) int dataRenderTickOnscreen;
@property (nonatomic) int dataRenderTickEncode;
@property (nonatomic) int dataRenderTickDecode;
@property (nonatomic) unsigned long long dataRenderErrorState;

+ (void)initialize;

@end
