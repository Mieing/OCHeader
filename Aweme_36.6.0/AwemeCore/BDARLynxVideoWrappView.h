@class BDARVPlayer;
@protocol BDARLynxContext;

@interface BDARLynxVideoWrappView : UIView

@property (weak, nonatomic) BDARVPlayer *player;
@property (weak, nonatomic) id<BDARLynxContext> lynxContext;

- (void).cxx_destruct;

@end
