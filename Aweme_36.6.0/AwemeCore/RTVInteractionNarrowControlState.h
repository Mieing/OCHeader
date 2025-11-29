@interface RTVInteractionNarrowControlState : NSObject

@property (nonatomic) BOOL hideControl;
@property (nonatomic) BOOL close;
@property (nonatomic) BOOL unfold;
@property (nonatomic) BOOL playLastFeed;
@property (nonatomic) BOOL pauseFeed;
@property (nonatomic) BOOL playNextFeed;
@property (nonatomic) BOOL showInvite;
@property (nonatomic) BOOL muteAudio;

- (void)updatePauseFeed:(BOOL)a0;

@end
