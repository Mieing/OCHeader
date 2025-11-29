@interface WCFinderPushFeedPlayParams : NSObject

@property (nonatomic) double startPlayVideoTime;
@property (nonatomic) BOOL pauseVideo;
@property (nonatomic) double playbackRate;
@property (nonatomic) BOOL forceResumePlaying;

- (id)init;

@end
