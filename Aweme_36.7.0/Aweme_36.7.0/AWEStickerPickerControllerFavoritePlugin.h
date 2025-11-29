@class AWEStickerPickerFavoriteView, NSDictionary, NSString;
@protocol ACCCameraService, ACCRecorderViewContainer, ACCStickerPickerService, AWEStickerPickerControllerProtocol, AWEStickerViewLayoutManagerProtocol, ACCPropFavoriteObserverProtocol, ACCRecordSidebarService;

@interface AWEStickerPickerControllerFavoritePlugin : NSObject <ACCStickerPickerServiceSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<AWEStickerPickerControllerProtocol> controller;
@property (weak, nonatomic) id<ACCStickerPickerService> stickerPickerService;
@property (retain, nonatomic) AWEStickerPickerFavoriteView *favoriteView;
@property (weak, nonatomic) id<AWEStickerViewLayoutManagerProtocol> layoutManager;
@property (copy, nonatomic) NSDictionary *trackingInfoDictionary;
@property (weak, nonatomic) id<ACCPropFavoriteObserverProtocol> favoriteObserver;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParamsForDIYProp:(id)a0;
- (void)controller:(id)a0 willShowOnView:(id)a1;
- (void)controller:(id)a0 didSelectNewSticker:(id)a1 oldSticker:(id)a2;
- (void)stickerPickerServiceDidFinishLoadCategories:(id)a0;
- (void)p_onFavoriteBtnClicked:(id)a0;
- (void)p_onFavoriteBtnClicked_IMP:(id)a0;
- (void)p_fetchAndObserveFavouriteList;
- (void)p_setupFavouriteView;
- (void)p_initSelectedState;
- (void)p_removeFavouriteView;
- (void)p_handleFavoriteStickerListChange;
- (void)p_updateSelectedState:(BOOL)a0;
- (void)p_toggleSelected;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
