@interface AWESearchArticleTimeTrackItem : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) double duration;

- (BOOL)ticking;
- (double)tock;
- (id)init;
- (void)tick;

@end
