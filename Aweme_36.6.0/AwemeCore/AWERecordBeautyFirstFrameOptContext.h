@class AWEStudioRecorderFeatureBeautyConfig, AWERecordBeautyRenderOptimize;
@protocol AWERecordBeautyRenderOptimize, AWERecordBeautyDownloaderProtocol;

@interface AWERecordBeautyFirstFrameOptContext : NSObject

@property (retain, nonatomic) id<AWERecordBeautyDownloaderProtocol> downloader;
@property (retain, nonatomic) AWERecordBeautyRenderOptimize *render;
@property (retain, nonatomic) AWEStudioRecorderFeatureBeautyConfig *beautyConfig;
@property (readonly, nonatomic) id<AWERecordBeautyRenderOptimize> renderOptimize;

+ (id)beautyConfig;
+ (BOOL)enableOpt;
+ (id)p_generateDataFilterConfig;
+ (long long)beautyPreloadDownload;
+ (void)startPreloadBeautyResourcesIfNeed;
+ (void)createRenderOptimizeIfNeed;
+ (void)updateRenderOptimizeWith:(id)a0;
+ (void)generalRenderBeautyInfoWith:(id)a0;
+ (BOOL)existBeautyCachePanelInfo;
+ (BOOL)preloadEffectOpt;
+ (void)startRecordBeautyOptTask:(id)a0;
+ (void)backupRecordBeautyOptTask:(id)a0;
+ (void)clearRenderInfo;
+ (id)defaultManager;

- (void)startPreloadBeautyItem;
- (void)preloadLogicWith:(id)a0;
- (id)findAllPreDownloadBeautyItem:(id)a0;
- (void)preloadDownloadBeautyDataIfNeed:(id)a0;
- (id)buildBeautyDownloaderConfig;
- (void).cxx_destruct;

@end
