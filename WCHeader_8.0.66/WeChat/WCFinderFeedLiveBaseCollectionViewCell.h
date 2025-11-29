@interface WCFinderFeedLiveBaseCollectionViewCell : UICollectionViewCell

- (void)playVideoIfSupport:(double)a0 silencePlay:(BOOL)a1;
- (void)previewLive;
- (void)pauseVideoIfSupport:(BOOL)a0;
- (void)stopVideoIfSupport;
- (void)muteVideo:(BOOL)a0;

@end
