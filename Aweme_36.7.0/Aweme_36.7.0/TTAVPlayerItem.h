@class NSError, NSURL;

@interface TTAVPlayerItem : NSObject

@property (nonatomic) long long status;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long loadedProgress;
@property (nonatomic, getter=isPlaybackBufferEmpty) BOOL playbackBufferEmpty;
@property (nonatomic, getter=isPlaybackLikelyToKeepUp) BOOL playbackLikelyToKeepUp;
@property (nonatomic, getter=isPlaybackBufferFull) BOOL playbackBufferFull;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

+ (id)playerItemWithURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
