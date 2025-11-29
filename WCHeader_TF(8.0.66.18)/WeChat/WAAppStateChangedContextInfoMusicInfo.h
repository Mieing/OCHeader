@interface WAAppStateChangedContextInfoMusicInfo : MMObject

@property (nonatomic) BOOL canKeepAliveByAudioPlay;
@property (nonatomic) BOOL isPlayingMusic;
@property (nonatomic) BOOL isMusicInteruptedByOtherSource;

- (id)description;

@end
