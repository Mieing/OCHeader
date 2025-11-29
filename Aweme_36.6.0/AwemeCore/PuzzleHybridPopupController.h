@class IESLivePuzzleOrientationHandler;

@interface PuzzleHybridPopupController : UIViewController

@property (retain, nonatomic) IESLivePuzzleOrientationHandler *orientationHandler;

- (void)live_takeover_dismissWithAnimated:(id)a0 animator:(SEL)a1 closeType:(void /* unknown type, empty encoding */)a2 completion:(void /* unknown type, empty encoding */)a3;
- (id)initWithConfig:(id)a0 context:(id)a1 delegate:(id)a2;

@end
