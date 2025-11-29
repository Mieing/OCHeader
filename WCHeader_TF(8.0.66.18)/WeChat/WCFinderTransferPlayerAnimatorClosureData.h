@class WCPlayerView, UIView;

@interface WCFinderTransferPlayerAnimatorClosureData : NSObject

@property (retain, nonatomic) UIView *moveBox;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } fromTransform;
@property (retain, nonatomic) WCPlayerView *playerView;

- (void).cxx_destruct;

@end
