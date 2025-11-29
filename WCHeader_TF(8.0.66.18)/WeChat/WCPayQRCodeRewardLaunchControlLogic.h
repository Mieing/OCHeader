@class WCPayQRCodeRewardSetPhotoOrWordCgi, WCPayQRCodeRewardGetCodeCgi, WCPayQRCodeRewardReceiverDetailViewController, NSString, WCPayQRCodeRewardGenCodeCgi, MMWebViewController;

@interface WCPayQRCodeRewardLaunchControlLogic : WCPayControlLogic <WCPayQRCodeRewardSetupViewControllerDelegate, WCPayQRCodeRewardGenCodeCgiDelegate, WCPayQRCodeRewardReceiverDetailViewControllerDelegate, WCPayQRCodeRewardGetCodeCgiDelegate, WCPayQRCodeRewardSetPhotoOrWordCgiDelegate, ICdnComMgrExt>

@property (retain, nonatomic) WCPayQRCodeRewardGetCodeCgi *getRewardCodeCgi;
@property (retain, nonatomic) WCPayQRCodeRewardGenCodeCgi *genRewardCodeCgi;
@property (retain, nonatomic) WCPayQRCodeRewardSetPhotoOrWordCgi *setPhotoOrWordCgi;
@property (retain, nonatomic) WCPayQRCodeRewardReceiverDetailViewController *detailViewController;
@property (copy, nonatomic) NSString *currentSettingWord;
@property (retain, nonatomic) NSString *currentCdnClientID;
@property (nonatomic) long long downloadCodeImgScene;
@property (retain, nonatomic) MMWebViewController *uploadIdWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)stopLogic;
- (void)startLogic;
- (void)onSetupViewControllerBack;
- (void)onSetupViewControllerConfirmGenCodeWithAmountList:(id)a0 rewardDesc:(id)a1 hasChangeDefaultAmount:(BOOL)a2;
- (void)onReceiverDetailViewControllerBack;
- (void)onRecevierDetailViewControllerClickSetupBtn;
- (void)onReceiverDetailViewControllerClickRewardSettingBtn;
- (void)onReceiverDetailViewControllerUserSetPhotoWording:(id)a0;
- (void)onReceiverDetailViewControllerUserRemovePhotoWording;
- (void)sendGetCodeCgi;
- (void)webViewReturn:(id)a0;
- (void)onGetQRCodeRewardGetCodeResp:(id)a0;
- (void)onGetQRCodeRewardSetCodeResp:(id)a0;
- (void)onGetQRCodeRewardSetPhotoOrWordCgiResp:(id)a0;
- (void)saveGetQRCodeRewardCacheToFile;
- (BOOL)hasLocalCodeImageCache;
- (id)getCodeViewCdnDownloadClientId;
- (void)downloadCodeImageView;
- (void)OnCdnDownload:(id)a0;
- (void)handleEventAfterDownloadCodeImage;
- (void).cxx_destruct;

@end
