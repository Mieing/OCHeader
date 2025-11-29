@interface AWEAdFeedDoubleColumnAdTrackManager : HTSService <AWEAdFeedDoubleColumnAdTrackManager> {
    void /* unknown type, empty encoding */ entranceModel;
    void /* unknown type, empty encoding */ adTrackDict;
    void /* unknown type, empty encoding */ fullPageImageVoiceStatus;
}

- (void)fullPageTrackAvatarOrNameClickWithModel:(id)a0 isClickName:(BOOL)a1;
- (void)feedDoubleColumnCellClick:(id)a0 clickPosition:(id)a1;
- (void)feedDoubleColumnCellShow:(id)a0;
- (void)fullPageCardShow:(id)a0 cardType:(id)a1;
- (void)fullPageCardOtherClick:(id)a0 clickPosition:(id)a1;
- (void)fullPagePinchImageEnter:(long long)a0 model:(id)a1;
- (void)fullPagePinchImageShow:(id)a0;
- (void)fullPageImageSlideToIndex:(long long)a0 model:(id)a1 isLastImage:(BOOL)a2;
- (void)fullPagePinchImageExit:(id)a0;
- (void)fullPageImageFollowStatus:(BOOL)a0 model:(id)a1;
- (void)fullPageImageLikeType:(long long)a0 model:(id)a1;
- (void)fullPageImageCommentType:(long long)a0 model:(id)a1;
- (void)fullPageImageShareClick:(id)a0;
- (void)enterFullPageImageFeedFromModel:(id)a0;
- (void)fullPageImageFeedShow:(id)a0;
- (void)fullPageImageFeedVoiceStatusChanged:(long long)a0;
- (void)fullPageImageFeedEndShow:(id)a0;
- (void)exitInsImageFeed;
- (void).cxx_destruct;
- (id)init;

@end
