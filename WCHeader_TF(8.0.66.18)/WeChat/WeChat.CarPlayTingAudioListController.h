@interface WeChat.CarPlayTingAudioListController : WeChat.CarPlayTingBaseListController <WeChat.ICarPlayNowPlayingExt> {
    void /* unknown type, empty encoding */ listenLaterPlayListLogic;
    void /* unknown type, empty encoding */ recommendPlayListLogic;
    void /* unknown type, empty encoding */ listenlaterAudios;
    void /* unknown type, empty encoding */ recommendAudios;
    void /* unknown type, empty encoding */ currentPlayingListItem;
    void /* unknown type, empty encoding */ nextListenLaterDetailPage;
    void /* unknown type, empty encoding */ nextRecommondDetailPage;
    void /* unknown type, empty encoding */ hasRequest;
}

- (void)dealloc;
- (void)onPlayingItemUpdateWithPlayingItem:(id)a0;
- (void).cxx_destruct;

@end
