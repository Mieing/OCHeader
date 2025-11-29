@class NSString, NSTimer, ACCStudioPerfUtilStickerPanContext, UIView;
@protocol DVEPlayerServiceProtocol, AEKMegaEditor, IESServiceProvider;

@interface ACCStudioPerfUtilViewModel : NSObject <ACCStudioPerfUtilServiceProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (nonatomic) long long stickerId;
@property (retain, nonatomic) ACCStudioPerfUtilStickerPanContext *stickerContext;
@property (nonatomic) long long stickerPanDiff;
@property (nonatomic) long long stickerPanStartTime;
@property (nonatomic) long long stickerPanEndTime;
@property (nonatomic) struct CGPoint { double x; double y; } stickerExpectPoint;
@property (retain, nonatomic) NSTimer *stickerTimer;
@property (weak, nonatomic) UIView *stickerResponseView;
@property (nonatomic) struct CGPoint { double x; double y; } realStickerPosition;
@property (copy, nonatomic) id /* block */ stickerParamsBlock;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (nonatomic) long long stickerSelected;
@property (nonatomic) long long stickerStartDownload;
@property (nonatomic) long long stickerEndDownload;
@property (nonatomic) long long stickerApplySuccess;
@property (nonatomic) long long stickerPanelDismiss;
@property (nonatomic) long long stickerAddOrReplace;
@property (nonatomic) long long musicApplyStart;
@property (nonatomic) long long musicApplyEnd;
@property (nonatomic) long long captionStart;
@property (nonatomic) int enterStyle;
@property (nonatomic) long long captionExportStart;
@property (nonatomic) long long captionExportEnd;
@property (nonatomic) long long captionRequestStart;
@property (nonatomic) long long captionRequestEnd;
@property (nonatomic) long long captionEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableUseMusicVolumeFP;
+ (BOOL)enableFirstFrameCoverOpt;
+ (BOOL)enableFirstFrameCoverVisibleBlk;
+ (BOOL)enableUseAweBindOptimize;
+ (double)availableMemoryInMB;
+ (BOOL)enableAIMemoriesMultiContext;
+ (BOOL)enableStudioPreUpload;
+ (BOOL)enableUseMusicApplyFP;
+ (BOOL)enableUseMusicVolumeMaskOld;
+ (BOOL)enableSpecialMusicCopyRight;
+ (BOOL)enableUseMusicAutoDraft;
+ (BOOL)enableRemoveBGMDraftRecover;

- (BOOL)enableStickMetric;
- (int)stickMetricRatio;
- (void)cleanStickerPanValue;
- (float)stickMetricTime;
- (void)recordStickerPanDiff;
- (void)trackStickerPanDiff;
- (struct CGPoint { double x0; double x1; })transformPositionWithWrapperView:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)equalPoint:(struct CGPoint { double x0; double x1; })a0 point2:(struct CGPoint { double x0; double x1; })a1;
- (id)perfSetting;
- (void)trackAEStickApplyDuration;
- (void)startStickerPanWithId:(long long)a0 context:(id)a1;
- (void)endStickerPanWithId:(long long)a0;
- (void)changeStickerPanWithId:(long long)a0 theView:(id)a1 expectPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)stickPositionChangeWithError:(id)a0 stickerIndex:(long long)a1 x:(float)a2 y:(float)a3 costTime:(float)a4;
- (void)trackMusicApplyDuration;
- (void)trackCaptionPanelDuration;
- (void)trackPlayHitchRatio:(id)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (id)initWithServiceProvider:(id)a0;

@end
