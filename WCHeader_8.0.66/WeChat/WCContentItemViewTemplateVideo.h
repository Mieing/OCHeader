@class NSString, ForwardMessageLogicController, WCSNSNodeVideoView, WCMediaItem;

@interface WCContentItemViewTemplateVideo : WCContentItemBaseView <WCSNSNodeVideoViewDelegate> {
    WCSNSNodeVideoView *_videoView;
    ForwardMessageLogicController *m_forwardMsgLogic;
    WCMediaItem *m_oMediaItem;
    BOOL _shouldIgnoreLongPress;
}

@property (nonatomic) unsigned long long legalityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;

- (void)layoutSubviews;
- (void)dealloc;
- (void)initViewsWithWCDataItem:(id)a0;
- (id)initWithWCDataItem:(id)a0;
- (id)initWithWCDataItem:(id)a0 showDetail:(BOOL)a1;
- (id)initWithWCDataItem:(id)a0 showDetail:(BOOL)a1 withScene:(unsigned long long)a2;
- (void)setNonInteractive;
- (void)currentAutoPlayVideoWillChange;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)onClickWCSight:(id)a0;
- (void)onLongPressedWCSight:(id)a0;
- (void)OnSilencePlay;
- (void)onShareToOpenSDK:(id)a0;
- (void)onLongTouch;
- (void)onMore:(id)a0;
- (void)jumpToDetail:(id)a0;
- (void)onJumpToViewDetail:(id)a0;
- (void)showVideoView;
- (id)getVisibleViewController;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateView:(id)a1;
- (void).cxx_destruct;

@end
