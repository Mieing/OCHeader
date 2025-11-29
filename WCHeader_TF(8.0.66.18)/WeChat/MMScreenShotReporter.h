@class MMScreenShotInfo;

@interface MMScreenShotReporter : NSObject

@property (nonatomic) unsigned int pageSource;
@property (nonatomic) unsigned int imagePreviewScene;
@property (nonatomic) unsigned int imageSource;
@property (retain, nonatomic) MMScreenShotInfo *screenShotInfo;
@property (nonatomic) BOOL isKeyboardShowing;
@property (nonatomic) unsigned long long fetchAssetStartTime;
@property (nonatomic) unsigned long long fetchAssetFinishTime;
@property (nonatomic) unsigned long long processImageStartTime;
@property (nonatomic) unsigned long long processImageFinishTime;

- (void)onScreenShot;
- (void)onScreenShotButtonAppear;
- (void)onScreenShotButtonClick;
- (void)onShowImagePreview:(unsigned int)a0;
- (void)onImageProcessButtonAppear;
- (void)onImageProcessButtonClick;
- (void)onImageProcessFinish;
- (void)onImageRestoreButtonClick;
- (void)onMenuItemClick:(id)a0;
- (unsigned int)getPageSource;
- (unsigned int)getImageSource;
- (BOOL)bScreenShot;
- (void).cxx_destruct;

@end
