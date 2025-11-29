@interface WCAdDynamicFeedSightView : WCSightView

@property (nonatomic) BOOL alreadyPlayedToEndFlag;

- (void)layoutSubviews;
- (void)customPlayerInfo:(id)a0;
- (void)startWCPlayer;
- (void)pauseWCPlayer;
- (void)onWCPlayerPlayEnd:(BOOL)a0;
- (void)exitVideoPlay;
- (BOOL)hasEndCover;

@end
