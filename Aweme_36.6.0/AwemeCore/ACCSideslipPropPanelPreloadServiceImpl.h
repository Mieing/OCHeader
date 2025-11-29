@class NSMutableDictionary, NSDictionary, NSString, IESEffectModel, NSMutableArray;
@protocol ACCPropPickerService, ACCSideslipPropService, IESServiceProvider, ACCSideslipPropPanelService, ACCRecordPropService, ACCCameraService;

@interface ACCSideslipPropPanelPreloadServiceImpl : NSObject <ACCStickerPickerServiceSubscriber, ACCRecordPropServiceSubscriber, ACCEffectEvent, ACCSideslipPropPanelPreloadService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCPropPickerService> propPickerService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) NSMutableArray *preloadList;
@property (retain, nonatomic) IESEffectModel *preloadRightModel;
@property (retain, nonatomic) IESEffectModel *preloadLeftModel;
@property (nonatomic) BOOL isApplyingProp;
@property (retain, nonatomic) NSMutableDictionary *preloadMap;
@property (retain, nonatomic) NSDictionary *preloadABConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enablePreload;

- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1 changeReason:(long long)a2;
- (id)stickerPickerService;
- (void)p_bindService;
- (void)stickerPickerService:(id)a0 didFinishDownloadSticker:(id)a1;
- (void)onEffectMessageReceived:(id)a0;
- (void)cancelAllPreloadEffects;
- (void)updatePreloadMapWithCellModel;
- (void)updatePreloadListWithMap;
- (void)preloadEffects:(id)a0;
- (BOOL)effectInPreloadArea:(id)a0;
- (void)updatePreloadMapWithDownloadedModel:(id)a0;
- (unsigned long long)preloadRightCount;
- (unsigned long long)preloadLeftCount;
- (BOOL)enablePreloadHot1;
- (id)effectModelWithCellModel:(id)a0;
- (void)updatePreloadMapWithHot1:(id)a0 left:(id)a1 right:(id)a2;
- (unsigned long long)minMemoryLimit;
- (unsigned long long)checkDeviceStatus;
- (void)propServiceDidApplyPropSuccess;
- (void)setupPreloadEffect;
- (void)preloadEffect:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;

@end
