@class WCPayWebImageView, NSRecursiveLock, NSString, NSMutableArray, WCRedEnvelopesGetRedPacketPreviewCgi;
@protocol PreviewContentLogicControllerDelegate;

@interface PreviewContentLogicController : BaseMsgContentLogicController <PreviewContentViewControllerDelegate, WCRedEnvelopesGetRedPacketPreviewCgiDelegate, WCPayWebImageViewDelegate, MMTipsViewControllerDelegate>

@property (retain, nonatomic) NSMutableArray *previewContentMsgs;
@property (nonatomic) BOOL hasCallPreviewCgi;
@property (retain, nonatomic) WCRedEnvelopesGetRedPacketPreviewCgi *m_getRedPacketPreviewCgi;
@property (retain, nonatomic) WCPayWebImageView *bubbleImageView;
@property (retain, nonatomic) WCPayWebImageView *recShowImageView;
@property (retain, nonatomic) WCPayWebImageView *detailImageView;
@property (retain, nonatomic) WCPayWebImageView *firstStoryImageBgView;
@property (nonatomic) BOOL bubbleImageDownloadOK;
@property (nonatomic) BOOL recShowImageDownloadOK;
@property (nonatomic) BOOL detailImageDownloadOK;
@property (nonatomic) BOOL firstStoryImageDownloadOK;
@property (nonatomic) BOOL bubbleImageDownloadFail;
@property (nonatomic) BOOL recShowImageDownloadFail;
@property (nonatomic) BOOL detailImageDownloadFail;
@property (nonatomic) BOOL firstStoryImageDownloadFail;
@property (nonatomic) BOOL reloadTipsIsShowing;
@property (retain, nonatomic) NSRecursiveLock *m_lock;
@property (nonatomic) BOOL isLoadingOk;
@property (retain, nonatomic) NSString *curDownloadCoverId;
@property (weak, nonatomic) id<PreviewContentLogicControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initViewController;
- (void)setExtraInfo:(id)a0;
- (void)onPreviewContentViewControllerViewDidAppear;
- (void)onSendGetPreviewCGIWithScene:(unsigned int)a0 url:(id)a1 material_id:(id)a2;
- (void)onPreviewContentViewControllerViewDidDisapper;
- (id)GetUsrTitle;
- (void)setPreviewContentMsg:(id)a0;
- (id)GetMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2 LeftCount:(unsigned int *)a3;
- (BOOL)isToolViewHidden;
- (void)CustomToolViewEX:(id)a0 inputPresenter:(id)a1;
- (BOOL)HasCustomToolBar;
- (id)GetRightBarButtonTitle;
- (BOOL)isOpenSingleInfo;
- (id)GetRightBarBtn;
- (id)onGetRightBarButton;
- (id)GetRightBarButtonImageName;
- (BOOL)ShouldShowSearchCompleteRightBarButton;
- (void)onWCRedEnvelopesGetRedPacketPreviewCgiResponseOK:(id)a0;
- (void)predownloadStoryInfo:(id)a0;
- (void)startDownloadFirstStoryPage:(id)a0;
- (void)startDownloadResource;
- (void)onLoadWCPayWebImageOK:(id)a0;
- (void)showWeakNetworkTips;
- (void)checkAllImageStatus;
- (void)onLoadWCPayWebImageFail:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;
- (void)onWCRedEnvelopesGetRedPacketPreviewCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)startAutoOpenTimer;
- (void).cxx_destruct;

@end
