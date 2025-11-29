@class LynxUIScroller;

@interface LynxUIScrollerProxy : NSObject

@property (weak, nonatomic) LynxUIScroller *scroller;
@property (nonatomic) double rate;
@property (nonatomic) BOOL enableScrollY;

- (id)initWithScroller:(id)a0 rate:(double)a1 enableScrollY:(BOOL)a2;
- (void).cxx_destruct;
- (void)displayLinkAction;

@end
