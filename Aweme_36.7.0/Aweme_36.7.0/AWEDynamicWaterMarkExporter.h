@class NSObject, IESMMTransProcessData, ACCEditCompileSession;
@protocol IVEEffectProcess, AWEStudioAwemeModelProtocol, ACCEditVideoDataProtocol;

@interface AWEDynamicWaterMarkExporter : NSObject

@property (retain, nonatomic) ACCEditCompileSession *transcoder;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *videoData;
@property (retain, nonatomic) IESMMTransProcessData *transConfig;
@property (retain, nonatomic) id<IVEEffectProcess> videoProcess;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (nonatomic) double progress;
@property (nonatomic) BOOL appInBackground;
@property (nonatomic) long long backgroundCount;
@property (nonatomic) BOOL canceling;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) id<AWEStudioAwemeModelProtocol> model;
@property (nonatomic) long long status;
@property (nonatomic) BOOL needSaveToAlbum;

+ (Class)aAWEStudioGlobalConfigClass;
+ (id)generateStaticImagesWithUserName:(id)a0 videoWidth:(double)a1 videoHeight:(double)a2;
+ (id)generateLifeStoryWaterImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)imageWatermarkName;
+ (id)generateLivePlaybackImagesWithUserID:(id)a0 userNickname:(id)a1 videoWidth:(double)a2 videoHeight:(double)a3;
+ (void)addWaterMarkWithUrl:(id)a0 composeOptions:(long long)a1 model:(id)a2 shouldMuteVideo:(BOOL)a3 needSaveToAlbum:(BOOL)a4 userName:(id)a5 videoOutputSize:(struct CGSize { double x0; double x1; })a6 edgeData:(id)a7 canDirectAddVideoheader:(BOOL)a8 progress:(id /* block */)a9 complete:(id /* block */)a10 onlyForCrop:(BOOL)a11 watermarkTaskType:(unsigned long long)a12 removeSourceFile:(BOOL)a13;
+ (id)generateStaticImagesWithUserName:(id)a0 videoWidth:(double)a1 videoHeight:(double)a2 alignment:(unsigned long long)a3;
+ (id)generateImagesWithUserName:(id)a0 videoWidth:(double)a1 videoHeight:(double)a2 alignment:(unsigned long long)a3 isCurrentUser:(BOOL)a4 profileIconType:(unsigned long long)a5;
+ (id)watermarkLogoImageArray;
+ (id)generateImageNameTextWithUserName:(id)a0 isCurrentUser:(BOOL)a1;
+ (id)endingWatermarkNameTextWithUser:(id)a0;
+ (id)endingWatermarkIDTextWithUser:(id)a0;
+ (id)endingWaterMarkLogoImage;
+ (id)backgroundImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (void)configTranscodeParams:(id)a0 videoData:(id)a1 addWatermark:(BOOL)a2;
+ (id)generateImagesWithUserName:(id)a0 videoWidth:(double)a1 videoHeight:(double)a2 alignment:(unsigned long long)a3 isCurrentUser:(BOOL)a4;
+ (void)configWatermarkBackground:(id)a0;
+ (id)endingWaterMarkImageWithVideoSize:(struct CGSize { double x0; double x1; })a0 douyinID:(id)a1 name:(id)a2 logoImage:(id)a3 stickerIDArray:(id)a4;
+ (id)endingWaterMarkImageWithVideoSize:(struct CGSize { double x0; double x1; })a0 user:(id)a1 avatar:(id)a2 forInstagram:(BOOL)a3;
+ (id)defaultExporter;
+ (void)addWaterMarkForSourceImage:(id)a0 userName:(id)a1 completion:(id /* block */)a2;
+ (id)addAIWaterMarkForSourceImage:(id)a0 iconInfos:(id)a1;
+ (void)cancel;

- (void)appWillResignActiveNotification;
- (void)appDidBecomeActiveNotification;
- (id)aAWEStudioGlobalConfig;
- (void)clearResource;
- (void)exportWithProgress:(id /* block */)a0 completeBlock:(id /* block */)a1;
- (void)p_export;
- (void)waterMarkExporterFinished:(id)a0;
- (void)addWatermarkSuccess:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addNotificationObservers;
- (void)dealloc;
- (void)cancel;
- (void)export;

@end
