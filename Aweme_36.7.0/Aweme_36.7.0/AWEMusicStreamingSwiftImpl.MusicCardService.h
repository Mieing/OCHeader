@interface AWEMusicStreamingSwiftImpl.MusicCardService : HTSService <AWEMusicCardService> {
    void /* unknown type, empty encoding */ cardInfosMap;
    void /* unknown type, empty encoding */ cardInfoLock;
    void /* unknown type, empty encoding */ cardInfoDelegates;
}

- (void)addCardInfoObserver:(id)a0;
- (void)removeCardInfoObserver:(id)a0;
- (void)prefetchCardInfoWithItemId:(id)a0;
- (void)preloadModel:(id)a0;
- (id)queryLyricsWithItemId:(id)a0;
- (id)queryCardInfoWithItemId:(id)a0;
- (id)musicCardUrl:(id)a0;
- (Class)musicCardCellClass;
- (void).cxx_destruct;
- (id)init;

@end
