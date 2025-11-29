@class AWEIMAssetGalleryPickerCustomConfig, NSMutableDictionary, NSString, NSLock, AWEIMPhotoPickerModel;

@interface AWEIMAssetGalleryPickerController : NSObject <AWEIMPhotoPickerViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) NSMutableDictionary *albumLoaders;
@property (retain, nonatomic) NSMutableDictionary *resourceLoaders;
@property (retain, nonatomic) AWEIMPhotoPickerModel *pickerModel;
@property (nonatomic) BOOL shouldSend;
@property (nonatomic) double beginSendTimestamp;
@property (nonatomic) double finishSelectTimestamp;
@property (copy, nonatomic) id /* block */ sendCompletionHandler;
@property (retain, nonatomic) NSMutableDictionary *originImageDataMap;
@property (retain, nonatomic) NSMutableDictionary *nonOriginImageDataMap;
@property (retain, nonatomic) NSMutableDictionary *originImageSizeMap;
@property (retain, nonatomic) NSMutableDictionary *nonOriginImageSizeMap;
@property (retain, nonatomic) NSMutableDictionary *imageCoverDataMap;
@property (retain, nonatomic) NSMutableDictionary *imageCoverSizeMap;
@property (retain, nonatomic) NSLock *imageDataOrSizeMapLock;
@property (retain, nonatomic) AWEIMAssetGalleryPickerCustomConfig *customConfig;
@property (nonatomic) BOOL enableLowQualityEarlyReturn;
@property (nonatomic) BOOL isPresenting;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) BOOL disableSendVideo;
@property (nonatomic) BOOL disableSendWatchOnce;
@property (nonatomic) BOOL supportExchangeImage;
@property (copy, nonatomic) id /* block */ sendAssetBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)startPhotoPickerViewControllerWithCert:(id)a0 customConfig:(id)a1;
- (void)setMaxAssetCount:(unsigned long long)a0;
- (void)startPhotoPickerViewControllerWithCert:(id)a0 customConfig:(id)a1 scene:(unsigned long long)a2;
- (void)__removeImageDataAndSizeMapForIdentifier:(id)a0;
- (void)__selectPhotoAsset:(id)a0 identifier:(id)a1;
- (void)__selectVideoAsset:(id)a0 identifier:(id)a1;
- (void)__selectResults:(id)a0 identifier:(id)a1;
- (void)onPhotoPickerViewControllerDeselectIdentifier:(id)a0;
- (void)onPhotoPickerViewControllerSelectIdentifier:(id)a0 asset:(id)a1;
- (void)__resetPickModel;
- (void)__sendAssetsWithCompleteHandler:(id /* block */)a0;
- (BOOL)__checkSendAssets;
- (void)__sendAssetComplete:(id /* block */)a0;
- (void)__trackProcessFinishSelect:(double)a0 beginSend:(double)a1 finishProcess:(double)a2 assets:(id)a3;
- (id)__localPhotoAssetByAsset:(id)a0 identifier:(id)a1;
- (id)__localVideoAssetByAsset:(id)a0 identifier:(id)a1;
- (void)__clearImageDataAndSizeMap;
- (void)photoPickerViewControllerFinishPickAsset:(id)a0;
- (void)onPhotoPickerViewControllerChangeLivePhotoMode:(id)a0;
- (void)photoPickerViewControllerCancelPickAsset:(id)a0;
- (void)startPhotoPickerViewControllerWithCert:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;

@end
