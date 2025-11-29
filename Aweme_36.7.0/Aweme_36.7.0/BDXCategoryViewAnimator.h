@class CADisplayLink;

@interface BDXCategoryViewAnimator : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double firstTimestamp;
@property (getter=isExecuting) BOOL executing;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (copy, nonatomic) id /* block */ completeCallback;

- (void)processDisplayLink:(id)a0;
- (void)invalid;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
