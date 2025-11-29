@class NSString, UIImage;

@interface AWEListenFeedPlayModel : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) BOOL isSameVideo;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) double totalPlaybackTime;
@property (nonatomic) double speed;

- (void).cxx_destruct;

@end
