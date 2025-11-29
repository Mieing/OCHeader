@interface AWEFormatImpl.XPlayComponent : AWEFormatImpl.BaseComponent <AFDMuteAwemeMessage> {
    void /* unknown type, empty encoding */ playDetail;
    void /* unknown type, empty encoding */ xplayManager;
    void /* unknown type, empty encoding */ feedLogicComponent;
    void /* unknown type, empty encoding */ _xplayRenderContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerItem;
    void /* unknown type, empty encoding */ xplayGameReady;
    void /* unknown type, empty encoding */ isResumeing;
    void /* unknown type, empty encoding */ hasShowInFeed;
    void /* unknown type, empty encoding */ hasPausedInFeed;
    void /* unknown type, empty encoding */ aweModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_preloadUtil;
    void /* unknown type, empty encoding */ canSwipeToFeed;
    void /* unknown type, empty encoding */ roomModel;
    void /* unknown type, empty encoding */ hasSendEnterInnerRoomMsg;
    void /* unknown type, empty encoding */ isShowingGuide;
    void /* unknown type, empty encoding */ guideTimer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bgMusicBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playInfoBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_miniPlayView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topLeftStackView;
}

- (void)muteAwemeMessage;
- (void)muteAwemeCanceled;

@end
