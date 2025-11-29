@class VEAnimatedImageInfo, NSString, HTSVideoData, UIImage, VEVideoFillConfig, HTSGLContext, VETransData, AVVideoComposition, AVAsset;

@interface VEConfigData : NSObject <NSCopying>

@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) VETransData *transData;
@property (copy, nonatomic) NSString *smartCodecModel;
@property (copy, nonatomic) NSString *smartCodecParams;
@property (weak, nonatomic) HTSGLContext *htsGLContext;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) double keyframeIntervalDuration;
@property (retain, nonatomic) NSString *videoProfileLevel;
@property (retain, nonatomic) NSString *videoEntropyMode;
@property (nonatomic) long long compileBiterate;
@property (nonatomic) int videoRotation;
@property (nonatomic) struct CGSize { double width; double height; } normalizeSize;
@property (nonatomic) BOOL needRestoreInfoSticker;
@property (nonatomic) BOOL allowFrameReordering;
@property (nonatomic) BOOL allowRealTime;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVVideoComposition *videoCompostion;
@property (retain, nonatomic) UIImage *watermarkImage;
@property (nonatomic) float watermarkDuration;
@property (nonatomic) BOOL useNewMudule;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL enableNewOldEngineCoexist;
@property (copy, nonatomic) NSString *licenseType;
@property (nonatomic) BOOL noNeedReverse;
@property (nonatomic) BOOL infoStickerForceAmazing;
@property (nonatomic) int exportFps;
@property (nonatomic) BOOL enableOptExportFps;
@property (nonatomic) BOOL useGlobalEffectGroup;
@property (nonatomic) BOOL disableEffectGroup;
@property (nonatomic) BOOL useMVMultiProcessFilter;
@property (nonatomic) BOOL disableInfoSticker;
@property (nonatomic) BOOL disableTransition;
@property (nonatomic) BOOL infostickerTextureRelease;
@property (nonatomic) BOOL needResetFiltersMananger;
@property (nonatomic) BOOL disableExtracFilter;
@property (nonatomic) BOOL isUsedForExport;
@property (nonatomic) struct CGSize { double width; double height; } previewSize;
@property (nonatomic) BOOL enableKeyFrameFeature;
@property (nonatomic) BOOL encodeUseFenceRender;
@property (nonatomic) BOOL disableEffectProcess;
@property (retain, nonatomic) VEVideoFillConfig *videoFillConfig;
@property (nonatomic) BOOL enablePhotoFirstFrameOpt;
@property (retain, nonatomic) VEAnimatedImageInfo *imageInfo;
@property (nonatomic) BOOL canTranscoderInBackGround;
@property (nonatomic) BOOL disableEditSizeLimit;
@property (nonatomic) BOOL enableEffectAfterCanvas;
@property (nonatomic) BOOL onlyVideo;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
