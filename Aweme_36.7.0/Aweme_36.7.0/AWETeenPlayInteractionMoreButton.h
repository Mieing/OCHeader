@class NSString, AWETeenImageAlbumImagePickerViewController, AWETeenMoreSheetView, DUXTeenPopover;

@interface AWETeenPlayInteractionMoreButton : AWETeenPlayInteractionBaseButton <AWETeenPanelPresentPortocol, AWETeenSaveDataCenterDelegate, DUXPopoverDelegate, AWETeenShareMessage, AWETeenImageAlbumImagePickerViewControllerDelegate>

@property (retain, nonatomic) AWETeenMoreSheetView *morePanel;
@property (retain, nonatomic) DUXTeenPopover *sharePopover;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *reportID;
@property (retain, nonatomic) AWETeenImageAlbumImagePickerViewController *albumImagePickerViewController;
@property (nonatomic) BOOL isPlayingWhenShowPanel;
@property (nonatomic) BOOL isShowSavePanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popoverDidDisappear:(id)a0;
- (void)initializeElement;
- (id)reportAction;
- (void)p_doDownloadImageAlbumWithSelectedIndices:(id)a0 model:(id)a1 referString:(id)a2 completion:(id /* block */)a3;
- (void)downloadImageAlbum:(id)a0 referString:(id)a1 logExtraDict:(id)a2 completion:(id /* block */)a3;
- (void)showImageAlbumDownloadSouceChooseWithAWeme:(id)a0 referString:(id)a1 logExtraDict:(id)a2 completion:(id /* block */)a3;
- (void)p_saveImageAlbumAsVideoWithAWeme:(id)a0 completion:(id /* block */)a1;
- (void)didSelectSaveImageAtindex:(long long)a0;
- (void)showDownloadActionSheetWithIsSingleImage:(BOOL)a0 enterFrom:(id)a1 title:(id)a2 willDismissHandler:(id /* block */)a3 resultHandler:(id /* block */)a4;
- (id)dislikeAction;
- (void)willPresentPanel:(id)a0;
- (void)willDismissPanel:(id)a0;
- (void)didFinishShareWithItemID:(id)a0 shareCount:(id)a1;
- (void)p_handleBroadcastNotification:(id)a0;
- (void)p_updateShareCount;
- (id)copyLinkAction;
- (void)saveDataCenter:(id)a0 downloadCompleted:(long long)a1;
- (void)saveDataCenter:(id)a0 saveToSysPhotosCompleted:(BOOL)a1;
- (void)saveDataCenter:(id)a0 needApplyPhotoPermission:(BOOL)a1;
- (BOOL)p_showShareStyle;
- (void)p_moreActionWithEnterMethod:(id)a0;
- (void)p_showShareGuide;
- (id)findTeenFeedBaseViewController;
- (id)findCustomDisplayController;
- (id)displayViewController;
- (id)playbackRateAction;
- (id)autoPlayAction;
- (id)p_trackDownloadStatus;
- (void)trackPlaybackRate;
- (id)p_createSharePopover;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)dealloc;
- (id)saveButton;

@end
