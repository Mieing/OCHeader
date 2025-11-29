@class NSString, GCImageMsgWrapper;

@interface GCImageCellModel : GCChatBaseCellModel <ICdnComMgrExt, IMMAssetICloudExt, GCImgMsgWrapperDelegate>

@property (nonatomic) BOOL oriNaviHidden;
@property (nonatomic) int icountPointProgress;
@property (retain, nonatomic) GCImageMsgWrapper *imgMsgWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChatroomMessage:(id)a0;
- (id)init;
- (Class)bindCellClass;
- (void)onExitRoom;
- (BOOL)checkClientMsgIdMatch:(id)a0;
- (BOOL)customHandleReSend;
- (BOOL)disableRightLoadingView;
- (void)reDownloadImg;
- (void)checkDownloadThumbImgIfFirstTime;
- (void)startDownloadImg;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)imageGenerateStatusChanged;
- (void)imageCdnUploadStatusChange;
- (id)bindImageCell;
- (void)onAssetImageDonwloadProgress:(double)a0 assetUrl:(id)a1;
- (void)onAssetImageDonwloadStart:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (void)handleCdnProgress:(id)a0;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)onImgFailedForReason:(id)a0;
- (void).cxx_destruct;

@end
