@class DDanmakuDrawBufferPool;

@interface DDanmakuMetalProducer : NSObject

@property (retain, nonatomic) DDanmakuDrawBufferPool *drawBufferPool;

- (void)addDanmaku:(id)a0;
- (void)removeDanmaku:(id)a0;
- (id)initWithDanmakuBufferPool:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
