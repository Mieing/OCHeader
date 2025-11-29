@interface WeChat.CarPlayNowPlayingController : WeChat.CarPlayController <TingFlowPlayerNotification, ITingPlayCenterMgrExt, CPNowPlayingTemplateObserver, TingDiscoverTapeExt, WeChat.ICarPlayUIExt> {
    void /* unknown type, empty encoding */ nowPlayingTemplate;
    void /* unknown type, empty encoding */ repeatBtn;
    void /* unknown type, empty encoding */ shuffleBtn;
    void /* unknown type, empty encoding */ discoverTapeMgr;
    void /* unknown type, empty encoding */ playingItem;
    void /* unknown type, empty encoding */ playingCommentInfo;
    void /* unknown type, empty encoding */ playingPlayList;
    void /* unknown type, empty encoding */ playerPlayList;
}

- (void)dealloc;
- (void)flowPlayer:(id)a0 onPlayerInfoEvent:(int)a1 message:(id)a2;
- (void)onTingPlayingInfoUpdate:(id)a0;
- (void)nowPlayingControllerWillAppear;
- (void)nowPlayingTemplateUpNextButtonTapped:(id)a0;
- (void)onPlayerLikeOp:(BOOL)a0 listenId:(id)a1;
- (void).cxx_destruct;

@end
