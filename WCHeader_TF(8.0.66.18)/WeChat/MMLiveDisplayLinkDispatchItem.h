@class CADisplayLink;

@interface MMLiveDisplayLinkDispatchItem : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) double beginTime;

- (id)initWithBlock:(id /* block */)a0;
- (void)start;
- (void)displayLinkCallback:(id)a0;
- (void).cxx_destruct;

@end
