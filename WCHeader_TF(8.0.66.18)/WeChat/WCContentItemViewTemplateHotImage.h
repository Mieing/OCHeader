@class WCDataItem, NSString, WCMediaItem, WCImageView, NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface WCContentItemViewTemplateHotImage : WCContentItemBaseView <WCImageViewDelegate, UIGestureRecognizerDelegate, WCImageFullScreeViewMgrExt, WCFacadeExt, WCCanvasPageViewControllerDelegate> {
    WCDataItem *m_oDataItem;
    WCMediaItem *m_oMediaItem;
    WCImageView *m_oWCCoverImage;
    NSMutableArray *m_arrMediaItem;
    NSMutableArray *m_arrImageView;
    NSMutableSet *_setViewMediaIndex;
    unsigned long long _viewInitIndex;
    NSMutableSet *_setScaleOutMediaIndex;
    NSMutableSet *_setScaleInMediaIndex;
    unsigned int _loadedStartTime;
    unsigned int _loadedEndTime;
    NSMutableDictionary *_dicMediaStartTime;
    NSMutableDictionary *_dicMediaEndTime;
    NSMutableArray *_arrNeedLogMediaID;
    NSMutableArray *_arrPreloadMediaID;
    NSMutableArray *_arrDownloadMediaID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;

- (void)dealloc;
- (void)layoutSubviews;
- (void)initViewsWithWCDataItem:(id)a0;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (void)onLongTouch;
- (void)onLongPressedWCImage:(id)a0;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)onViewAnimationWillHide;
- (void)onViewAnimationDidHide;
- (void)onViewAnimationFromIndex:(unsigned int)a0 toIndex:(unsigned int)a1;
- (void)onMediaDidScaleOut:(unsigned int)a0;
- (void)onMediaDidScaleIn:(unsigned int)a0;
- (void)onClickWCImage:(id)a0;
- (void)onClickWCImageFrom3DTouch:(id)a0;
- (void)onClickWCImage:(id)a0 needEdit:(BOOL)a1 From3DTouch:(BOOL)a2;
- (id)currentViewController;
- (void)onClickWCCanvasImage:(id)a0;
- (void)onDownloadFinish:(id)a0;
- (void)hideMenu;
- (void)tryLogThumbImageLoadedEffiency:(BOOL)a0;
- (void)tryLogClickBigImage;
- (id)genLogStrWithIndexSet:(id)a0;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)onDownloadFail:(id)a0 downloadType:(long long)a1;
- (void)onCancelDownloadSuccess:(id)a0 downloadType:(long long)a1;
- (void)onAddDownloadQueue:(id)a0 downloadType:(long long)a1;
- (void)onCloseCanvasPageView;
- (void)initFullScreenData;
- (void)deleteFullScreenData;
- (void)initFullScreeImageViews;
- (void)deleteFullScreeImageViews;
- (void).cxx_destruct;

@end
