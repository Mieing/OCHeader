@class CSJAdSlot, NSString, CSJURitSettingModel, NSError, CSJMaterialMeta;
@protocol CSJShakeTriggerDelegate;

@interface CSJAdInfoViewModel : NSObject <CSJShakeTriggerDataSource, CSJShakeTriggerDelegate>

@property (weak, nonatomic) id<CSJShakeTriggerDelegate> shakeTriggerDelegate;
@property (nonatomic) BOOL validShakeTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJURitSettingModel *ritSettingModel;
@property (nonatomic) long long nativeExpressAdViewSource;
@property (retain, nonatomic) NSError *fetchError;
@property (copy, nonatomic) NSString *tplPlug;
@property (copy, nonatomic) NSString *diffTplPlug;

- (id)fileCache;
- (long long)slotAdType;
- (BOOL)supportNativeDynamicRender;
- (void)preLoadAdImagesWith:(id)a0 withPreloadType:(unsigned long long)a1;
- (id)templateRenderSetting;
- (id)creativeDicForDynamicRender;
- (BOOL)supportFileCache;
- (void)pbu_preloadImageFileCacheExist:(BOOL)a0 withImageModel:(id)a1 withBeginTime:(double)a2 withType:(unsigned long long)a3;
- (void)loadImageTrackWithImageModel:(id)a0 preloadSize:(unsigned long long)a1 loalCache:(unsigned long long)a2 loadDuration:(unsigned long long)a3 error:(id)a4;
- (double)renderDelayTimeSecond;
- (id)mainImageModel;
- (id)track_tag_UsedIn_playalbeInExpress;
- (void)pbu_fillDataWithImageView:(id)a0 imageURLString:(id)a1;
- (void)preLoadAllAdImagesWithPreloadType:(unsigned long long)a0;
- (id)initWithSlot:(id)a0 materialMeta:(id)a1 source:(long long)a2;
- (id)templateDataModel;
- (id)currentRitSettingModel;
- (long long)renderSequence;
- (long long)backupRenderControl;
- (BOOL)needToGetTemplateDataInfo;
- (id)shakeTriggerScene;
- (double)shakeAmplitude;
- (void)fillDataWithImageView:(id)a0 imageModel:(id)a1;
- (void).cxx_destruct;
- (long long)calculationMethod;

@end
