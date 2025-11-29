@class NSDate, WAAppPageSystemMsgView, MMWebImageView, WAAppPageViewModel, NSString, UIImageView, WCTagsView, YYAsyncImageView, MMUILabel;

@interface WAAppPageCellView : WAAppMessageBaseCellView <IMsgExt, IWAUpdatableMsgMgrExt, WAAppPageSystemMsgViewDelegate>

@property (retain, nonatomic) MMWebImageView *appLogoView;
@property (retain, nonatomic) MMUILabel *appNameLabel;
@property (retain, nonatomic) UIImageView *defaultLogo;
@property (retain, nonatomic) YYAsyncImageView *imageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *updatableContentLabel;
@property (retain, nonatomic) WAAppPageSystemMsgView *systemMsgView;
@property (nonatomic) BOOL isUpdatingContentLabel;
@property (retain, nonatomic) WCTagsView *tagsView;
@property (retain, nonatomic) MMWebImageView *xmaskView;
@property (retain, nonatomic) UIImageView *playIconImgView;
@property (nonatomic) BOOL isVisible;
@property (retain, nonatomic) NSDate *visibleDate;
@property (readonly, nonatomic) WAAppPageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)willMoveToWindow:(id)a0;
- (void)initHeaderView;
- (void)initTagsView;
- (void)initTitleView;
- (void)initUpdatableContentView;
- (void)initPageImageView;
- (void)initPlayImageView;
- (void)initSystemMsgView;
- (void)layoutInternal;
- (void)layoutContentView;
- (void)preloadWeApp;
- (id)displayViewForImageBrowser;
- (void)onTouchUpInside;
- (void)OnMsgDownloadThumbOK:(id)a0 MsgWrap:(id)a1;
- (void)onUpdatableMsgInfoUpdated:(id)a0 info:(id)a1;
- (void)tryUpdateUpdatableMsgInfo;
- (void)scheduleUpdateWithLatestMsgInfo:(id)a0;
- (void)fillUpdatableMsgContent;
- (void)retryWithShareKey:(id)a0;
- (void)onLinkClicked;
- (id)fontOfSystemMsg;
- (BOOL)WAAppPageSystemMsgView_isUseLightStyle;
- (BOOL)canShowFavoriteMenuItem;
- (void)onAppear;
- (void).cxx_destruct;

@end
