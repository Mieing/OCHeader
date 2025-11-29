@class NSMutableDictionary;

@interface IESLiveVideoPlayerConfig : NSObject

@property (copy, nonatomic) NSMutableDictionary *videoDictionary;

+ (id)sharedConfig;

- (double)getVideoCurrentTime:(id)a0;
- (void)updateVideoTime:(double)a0 videoId:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
