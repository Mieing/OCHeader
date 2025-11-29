@class MMUIViewController, NSString, UIView, UINavigationController, GameVideoAlbumController, NSArray, MMAssetPickerController, MMImagePickerManagerOptionObj, MMUIButton;
@protocol MMImagePickerManagerDelegate, GameVideoAlbumControllerDelegate;

@interface GameHaowanTabViewController : GameCenterNativeVc <MMImagePickerManagerDelegate> {
    NSArray *_albumInfos;
    MMImagePickerManagerOptionObj *_imagePickerManagerOptionObj;
}

@property (retain, nonatomic) MMUIButton *currentTitleButton;
@property (retain, nonatomic) MMUIViewController *currentTabVc;
@property (retain, nonatomic) GameVideoAlbumController *myVideoTabVc;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) MMAssetPickerController *albumViewController;
@property (retain, nonatomic) UINavigationController *albumControlCenter;
@property (retain, nonatomic) MMUIButton *albumTabBtn;
@property (retain, nonatomic) MMUIButton *gameVideoTabBtn;
@property (nonatomic) BOOL isInPreview;
@property (weak, nonatomic) id<GameVideoAlbumControllerDelegate> delegate;
@property (weak, nonatomic) id<MMImagePickerManagerDelegate> imagePickerDelegate;
@property (nonatomic) unsigned long long galleryType;
@property (nonatomic) BOOL ignoreVideoPreview;
@property (nonatomic) unsigned long long defaultSelectTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAlbumInfos:(id)a0 imagePickerManagerOptionObj:(id)a1;
- (void)viewDidLoad;
- (void)configTabbuttonStyle:(id)a0;
- (void)setupTitleButton;
- (void)determinDefaultSelectTab;
- (void)selectHaoWanTab:(unsigned long long)a0;
- (BOOL)useTransparentNavibar;
- (void)initAlbumViewController;
- (void)initVideoAlbumViewController;
- (void)clickTitleLeft:(id)a0;
- (void)clickTitleRight:(id)a0;
- (void)onClose;
- (void)trackEventExit;
- (void)reportWithCurrenTabPosition:(long long)a0 action:(long long)a1;
- (id)buildReportWithCurrenTabPosition:(long long)a0 action:(long long)a1;
- (id)buildReportWithUiarea:(long long)a0 position:(long long)a1 action:(long long)a2;
- (id)buildMyLocalVideoWithPosition:(long long)a0 action:(long long)a1;
- (id)reportObjWithPosition:(long long)a0 action:(long long)a1;
- (id)buildTrackEventProps:(id /* block */)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingVideoWithAsset:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingVideoWithInfo:(id)a1;
- (void)MMImagePickerManagerDidSkip:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onImagePickerManagerStartPreview;
- (void)onImagePickerManagerCancelPreview;
- (void)onSelectFinish:(unsigned long long)a0;
- (void).cxx_destruct;

@end
