@class EditImageLogicController, PHCachingImageManager, NSString, CLLocation, EditVideoLogicController, NSObject;
@protocol OS_dispatch_queue;

@interface MMAssetMgr : MMRootService <MMServiceProtocol> {
    NSObject<OS_dispatch_queue> *m_queue;
}

@property (retain, nonatomic) CLLocation *m_lastLocation;
@property (retain, nonatomic) PHCachingImageManager *m_imageManagerForIOS8Plus;
@property (weak, nonatomic) EditImageLogicController *m_editImageLogicController;
@property (weak, nonatomic) EditVideoLogicController *m_editVideoLogicController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportPhotoUsageScene:(int)a0 dimensionSize:(struct CGSize { double x0; double x1; })a1 createTimestamp:(id)a2 isCreatedByWeChatCamera:(BOOL)a3 metadata:(id)a4;
+ (int)getAssetCameraDeviceForMetadata:(id)a0;
+ (int)getAssetSourceForMetadata:(id)a0 isCreatedByWeChatCamera:(BOOL)a1;
+ (BOOL)isCreatedByAppleCameraForMetadata:(id)a0;
+ (BOOL)isBackCameraForMetadata:(id)a0;
+ (BOOL)isFrontCameraForMetadata:(id)a0;
+ (BOOL)isScreenshotForMetadata:(id)a0;
+ (id)getSimplestDimensionRatio:(struct CGSize { double x0; double x1; })a0;
+ (int)gcdOfNum1:(int)a0 andNum2:(int)a1;
+ (int)GetNetType;

- (id)init;
- (id)getImageManager;
- (void)onServiceInit;
- (id)getQueue;
- (void)dispatchAction:(id /* block */)a0;
- (void)retrieveLocationForPicker;
- (BOOL)hasLocation;
- (double)latitude;
- (double)longitude;
- (void).cxx_destruct;

@end
