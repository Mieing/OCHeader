@class ScanTVHelper, ShakeTvItem, NSString, UIView, MMWebImageView, MMWebViewController, UIButton, MMUIActivityIndicatorView, SendAppMsgHandler, NSMutableArray, MMTableView, UILabel;

@interface ShakeTvViewController : MMUIViewController <MMWebViewDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, SendAppMsgHandleDelegate, MMWebImageViewDelegate, ScanTVDelegate, JSEventExt> {
    BOOL _isVideoPlaying;
    ScanTVHelper *m_tvHelper;
    MMTableView *_tableView;
    int m_uiShakeTvViewControllerShowStyle;
    BOOL _isModal;
    ShakeTvItem *_tvItem;
    UIView *_infoView;
    UIButton *_playBtn;
    UIButton *_actionBtn;
    MMWebImageView *_videoThumbImgView;
    MMWebViewController *_videoWebView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
    SendAppMsgHandler *_sendAppMsgHandler;
    NSMutableArray *seperatorLines;
    UIView *footerLine;
}

@property (nonatomic) BOOL canShareToFriend;
@property (nonatomic) BOOL canShareToWC;
@property (nonatomic) BOOL canAddToFav;
@property (nonatomic) BOOL canEditTag;
@property (nonatomic) BOOL canDelete;
@property (retain, nonatomic) id userdata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithShakeTvItem:(id)a0 andModal:(BOOL)a1 Style:(int)a2;
- (id)initWithExtContent:(id)a0 Scence:(unsigned int)a1;
- (void)dealloc;
- (void)onPlayerEnterFullscreen;
- (void)onPlayerExitFullscreen;
- (void)viewDidLayoutSubviews;
- (id)getCommentId;
- (void)initFooterView;
- (void)initHeaderView:(int)a0;
- (void)initTableView;
- (void)openPlayUrl;
- (void)initView;
- (void)viewDidLoad;
- (void)startLoadingWebView;
- (void)stopLoadingWebView;
- (void)initNotificationObservers;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)setSeperatorHidden:(id)a0 IndexPath:(id)a1 Hidden:(BOOL)a2;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didUnhighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onReturn;
- (void)onAction:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (id)getUpLoadTask:(id)a0;
- (id)getMessageWrap:(id)a0;
- (id)getThumbImageData;
- (void)jsSetPageState:(id)a0;
- (void)OnSendAppMsgOKToContacts:(id)a0;
- (void)onLoadImageOK:(id)a0;
- (void)onGetTVItem:(id)a0 TVItem:(id)a1;
- (void)onGetTVItemFail:(id)a0;
- (void)onDeleteTV;
- (void)onEditTVTag;
- (void).cxx_destruct;

@end
