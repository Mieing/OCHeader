@class MMUILabel, NSString, WAPlayerHttpMediaWrap, SightIconView, UIImage, WAAppVideoViewModel, YYAsyncImageView;

@interface WAAppVideoCellView : WAAppMessageBaseCellView <IMsgExt, ICdnComMgrExt, MMImageLoaderObserver> {
    YYAsyncImageView *m_thumbImageView;
    SightIconView *m_sightIconView;
    MMUILabel *_titleLabel;
    WAPlayerHttpMediaWrap *_videoMediaWrap;
    double _videoDownloadProgress;
    UIImage *_appThumb;
    NSString *_appThumbUrl;
}

@property (readonly, nonatomic) WAAppVideoViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)setViewModel:(id)a0;
- (void)dealloc;
- (void)stopDownloadVideo;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)stopDownloadImage:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (id)displayViewForImageBrowser;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })showRectForMenuController;
- (void)OnMsgDownloadThumbOK:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadThumbFail:(id)a0 MsgWrap:(id)a1;
- (void)initThumbImageView;
- (void)initTitleView;
- (void)initSightIconView;
- (void)updateSightIconView;
- (id)operationMenuItems;
- (void)startPlay:(BOOL)a0;
- (id)reportWithOperate:(unsigned long long)a0;
- (void)onSliencePlay:(id)a0;
- (void)onWAForward:(id)a0;
- (void)onTouchUpInside;
- (void)onAppear;
- (void)onCancelButtonClicked:(id)a0;
- (void)onSendFailButtonClicked:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)OnCdnVideoPreloadCompleted:(id)a0;
- (void).cxx_destruct;

@end
