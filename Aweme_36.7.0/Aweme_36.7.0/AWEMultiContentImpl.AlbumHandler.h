@interface AWEMultiContentImpl.AlbumHandler : AWEMultiContentImpl.ContentHandler <AFDAlbumHandlerIndexable, AFDRichContentProgressDurationProtocol, AFDAlbumTransitionUpdateableProtocol, AFDAlbumTransitionUpdatePlayStateProtocol, AFDAlbumTransitionUpdateContentProtocol> {
    void /* unknown type, empty encoding */ isPlayingBeforeEnteringDetail;
    void /* unknown type, empty encoding */ playModeBeforeEnterDetail;
    void /* unknown type, empty encoding */ userScrolledBeforeEnteringDetail;
    void /* unknown type, empty encoding */ startPinchingTime;
    void /* unknown type, empty encoding */ fromIndex;
    void /* unknown type, empty encoding */ albumSectionViewModel;
    void /* unknown type, empty encoding */ enableInfinityLoop;
}

@property (nonatomic, readonly) long long currentIndex;

- (void)scrollToIndex:(long long)a0 offset:(id)a1;
- (BOOL)shouldFillProgressWhenScrollWithCurrentIndex:(long long)a0;
- (void)updateAlbumHandlerWithOhterHandler:(id)a0;
- (void)updateAllInfoWithOtherContentHandler:(id)a0;
- (BOOL)shouldSpectialHandlePlayState;
- (void)updatePlayerController:(id)a0;
- (void)updatePlayStateWithAlbumHandler:(id)a0 playVideoVC:(id)a1;
- (void).cxx_destruct;

@end
