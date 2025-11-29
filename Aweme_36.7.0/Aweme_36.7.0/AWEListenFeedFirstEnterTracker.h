@interface AWEListenFeedFirstEnterTracker : NSObject

@property (nonatomic) double beginTS;
@property (nonatomic) BOOL reported;

- (void)beginTrack;

@end
