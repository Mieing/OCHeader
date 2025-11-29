@class IESLiveVideoPlayerController;

@interface IESLiveInnerFeedPlaybackItemModel : IESLiveInnerFeedBaseItemModel

@property (retain, nonatomic) IESLiveVideoPlayerController *videoPlayer;

- (void)setIsDefaultItem:(BOOL)a0;
- (void).cxx_destruct;
- (Class)cellClass;
- (Class)sectionClass;

@end
