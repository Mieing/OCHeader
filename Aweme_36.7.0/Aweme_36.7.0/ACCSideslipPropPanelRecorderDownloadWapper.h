@class ACCCameraSubscription, NSString;
@protocol ACCPropPickerService, IESServiceProvider;

@interface ACCSideslipPropPanelRecorderDownloadWapper : NSObject <ACCStickerPickerServiceSubscriber, ACCSideslipPropPanelDownloadService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCPropPickerService> propPickerService;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stickerPickerService;
- (void)downloadDataModelIfNeed:(id)a0;
- (void)prefetchDataModelsIfNeed:(id)a0;
- (id)dataModelDownloadProgress:(id)a0;
- (void)prefetchStickerSortListWithCurrentFocusIndex:(long long)a0;
- (void)p_bindService;
- (void)stickerPickerService:(id)a0 didBeginDownloadSticker:(id)a1;
- (void)stickerPickerService:(id)a0 didFinishDownloadSticker:(id)a1;
- (void)stickerPickerService:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)stickerPickerService:(id)a0 sticker:(id)a1 downloadProgressChange:(double)a2;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
