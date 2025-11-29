@class EmoticonStoreDownloadView, MMEmoticonStoreDownloadViewConfig, UIImageView, NSString;
@protocol MMEmoticonStoreDownloadLogicDelegate;

@interface MMEmoticonStoreDownloadLogic : MMEmoticonStoreBaseDownloadLogic <EmoticonStoreDownloadViewDelegate>

@property (retain, nonatomic) MMEmoticonStoreDownloadViewConfig *config;
@property (retain, nonatomic) UIImageView *downloadedCheck;
@property (retain, nonatomic) EmoticonStoreDownloadView *downloadView;
@property (nonatomic) double staticBtnWidth;
@property (nonatomic) int scene;
@property (nonatomic) int downloadType;
@property (weak, nonatomic) id<MMEmoticonStoreDownloadLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithConfig:(id)a0;
- (void)updateConfig:(id)a0;
- (double)calMaxDisplayLength;
- (id)displayView;
- (void)initViewIfNeeded;
- (void)initDownloadViewIfNeeded;
- (void)initDownloadedCheckIfNeeded;
- (void)onDownloadStatusChangeTo:(int)a0;
- (void)onDownloadProgress:(float)a0;
- (void)notifyDisplayViewChange;
- (BOOL)isLongWeCoinType;
- (void)onTapDownload;
- (void)onTapReward;
- (void)onTapUse;
- (void)onTapUninstall;
- (void)onTapCancelDownload;
- (void)onAlertViewQuitDownloadBtnClick;
- (id)curViewController;
- (void).cxx_destruct;

@end
