@class IESMMMVModel;

@interface VEEditorSessionConfig : NSObject

@property (nonatomic) BOOL isVideoNeedReverse;
@property (nonatomic) BOOL useNewMudule;
@property (nonatomic) BOOL shouldCheckPlayBack;
@property (retain, nonatomic) IESMMMVModel *mvModel;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL enableNewOldEngineCoexist;
@property (nonatomic) BOOL noNeedReverse;
@property (nonatomic) BOOL infoStickerForceAmazing;
@property (nonatomic) BOOL needSeekWhenPlayerAndItemNotReady;
@property (nonatomic) BOOL useGlobalEffectGroup;
@property (nonatomic) BOOL disableEffectGroup;
@property (nonatomic) BOOL useMVMultiProcessFilter;
@property (nonatomic) unsigned int audioProcessFrameCount;
@property (nonatomic) BOOL disableInfoSticker;
@property (nonatomic) BOOL disableTransition;
@property (nonatomic) BOOL enableMultiHighFPSPreview;
@property (nonatomic) BOOL enableKeyFrameFeature;
@property (nonatomic) BOOL isPreviewMode;
@property (nonatomic) BOOL disableCanvasTimelineAutoComplete;
@property (nonatomic) BOOL notSupportCrossplat;
@property (nonatomic) BOOL enableCrossplatInputCompile;
@property (nonatomic) BOOL enableNoAvplayer;
@property (nonatomic) BOOL enablePhotoFirstFrameOpt;
@property (nonatomic) BOOL enableAudioMixProtect;
@property (nonatomic) BOOL disableEditSizeLimit;
@property (nonatomic) BOOL enableEffectAfterCanvas;

+ (id)videoTemplateDefaultConfig;

- (void).cxx_destruct;
- (id)init;

@end
