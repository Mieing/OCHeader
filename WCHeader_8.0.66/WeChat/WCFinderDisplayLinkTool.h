@class CADisplayLink;

@interface WCFinderDisplayLinkTool : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double begin;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ updater;
@property (retain, nonatomic) WCFinderDisplayLinkTool *selfRetain;
@property (copy, nonatomic) id /* block */ complete;
@property (nonatomic) void /* function */ *timeFunc;

+ (void)runAnimation:(double)a0 update:(id /* block */)a1 timeFunc:(void /* function */ *)a2 complete:(id /* block */)a3;

- (id)initWithUpdater:(id /* block */)a0 duration:(double)a1;
- (void)start;
- (void)onDisplayLinkUpdate;
- (void).cxx_destruct;

@end
