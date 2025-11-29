@class NSString, AVPlayer, AVPlayerLayer;
@protocol WCFinderVideoTemplateSelectVCDelegate;

@interface WCFinderVideoTemplateSelectViewController : WCFinderTemplateSelectBasicViewController <MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate>

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (copy, nonatomic) NSString *currentPlayUrl;
@property (weak, nonatomic) id<WCFinderVideoTemplateSelectVCDelegate> delegate;
@property (nonatomic) unsigned long long enterScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)addNotificationObserver;
- (void)removeNotificationObserver;
- (void)onPlayerPlayToEnd:(id)a0;
- (void)setupDisplayView;
- (void)playVideo;
- (void)pauseVideo;
- (id)createViewModel;
- (void)reloadData;
- (void)relayoutView;
- (void)onClickCancel;
- (void)onClickDone;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingSightWithInfo:(id)a1;
- (void)onSightCameraCancel:(id)a0;
- (void)onShortVideoTaken:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 paramModel:(id)a3;
- (void).cxx_destruct;

@end
