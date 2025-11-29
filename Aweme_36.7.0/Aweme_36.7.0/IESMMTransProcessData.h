@class VEAnimatedImageInfo, NSString, NSArray, UIImage, IESVideoInvisibleWatermark, VEVideoFillConfig, IESVideoCropData, IESMMQualityScoreConfig, IESMMEffectStickerInfo, IESVideoAddEdgeData;

@interface IESMMTransProcessData : NSObject

@property (retain, nonatomic) NSArray *waterMarkDataArray;
@property (retain, nonatomic) UIImage *waterMarkBackground;
@property (retain, nonatomic) IESVideoCropData *cropInfo;
@property (retain, nonatomic) IESVideoAddEdgeData *addEdgeInfo;
@property (retain, nonatomic) IESMMQualityScoreConfig *qualityScoreConfig;
@property (nonatomic) unsigned long long curEffectFilterType;
@property (retain, nonatomic) IESMMEffectStickerInfo *currentEffectFilterPath;
@property (retain, nonatomic) IESMMEffectStickerInfo *currentFilterPath;
@property (retain, nonatomic) UIImage *endingWaterMarkImage;
@property (nonatomic) float endingWatermarkDuration;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) BOOL enableUploadDirectly;
@property (nonatomic) BOOL canTranscoderInBackGround;
@property (nonatomic) BOOL multiContextEnable;
@property (nonatomic) BOOL noReencodeCopy;
@property (nonatomic) BOOL useNewMudule;
@property (nonatomic) BOOL waterMarkUseCache;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL infoStickerForceAmazing;
@property (nonatomic) BOOL useGlobalEffectGroup;
@property (nonatomic) BOOL disableEffectGroup;
@property (nonatomic) BOOL useMVMultiProcessFilter;
@property (nonatomic) BOOL disableInfoSticker;
@property (nonatomic) BOOL disableTransition;
@property (nonatomic) int exportFps;
@property (nonatomic) BOOL forceUseUserFps;
@property (nonatomic) BOOL enableOptExportFps;
@property (nonatomic) BOOL setAudioTimeBlock;
@property (nonatomic) double timeOutPeriod;
@property (nonatomic) BOOL infostickerTextureRelease;
@property (nonatomic) BOOL disableExtracFilter;
@property (nonatomic) BOOL encodeUseFenceRender;
@property (nonatomic) BOOL enableKeyFrameFeature;
@property (nonatomic) BOOL disableEffectProcess;
@property (retain, nonatomic) VEVideoFillConfig *videoFillConfig;
@property (nonatomic) BOOL isImageExport;
@property (retain, nonatomic) VEAnimatedImageInfo *imageInfo;
@property (nonatomic) BOOL hasEndingWatermark;
@property (nonatomic) BOOL enableExportAsyncComplete;
@property (copy, nonatomic) NSString *smartCodecModel;
@property (nonatomic) BOOL isEnableAICodec;
@property (nonatomic) BOOL enableInvisibleWatermark;
@property (retain, nonatomic) IESVideoInvisibleWatermark *invisibleWaterMark;
@property (nonatomic) BOOL useCustomColorSpace;
@property (nonatomic) int customColorSpace;
@property (nonatomic) BOOL onlyVideo;
@property (nonatomic) int remuxIgnoreCrop;

+ (id)videoTemplateDefaultConfig;

- (long long)currentWaterMarkIndex:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;
- (id)init;

@end
