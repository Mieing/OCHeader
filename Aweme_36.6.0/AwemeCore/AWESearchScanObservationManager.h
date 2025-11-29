@class PHFetchResult, PHFetchOptions, UIImage, NSString;

@interface AWESearchScanObservationManager : NSObject <PHPhotoLibraryChangeObserver, AWESearchScanObservationProtocol>

@property (nonatomic) BOOL isBecomeActive;
@property (retain, nonatomic) PHFetchResult *assetsFetchResults;
@property (retain, nonatomic) PHFetchOptions *assetsFetchOptions;
@property (retain, nonatomic) UIImage *latestPhoto;
@property (nonatomic) double latestPhotoCreateTime;
@property (copy, nonatomic) NSString *latestPhotoIdentifier;
@property (copy, nonatomic) NSString *latestPhotoInLibraryIdentifier;
@property (nonatomic) unsigned long long captureStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTeenModeEnabled;
+ (BOOL)isBasicModeEnabled;
+ (id)shareInstance;

- (void)takeScreenShotImage:(id)a0;
- (BOOL)isPhotoAuthorized;
- (void)getInitialPHFetchInfo;
- (void)registPhotoLibraryChangeObserver;
- (void)resetCaptureStatus;
- (void)appendCaptureStatus:(unsigned long long)a0;
- (void)resetCaptureInfo;
- (BOOL)checkCaptureStatusHasClick;
- (BOOL)checkCaptureStatusHasAllShow;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)photoLibraryDidChange:(id)a0;
- (id)init;
- (BOOL)isLogin;

@end
