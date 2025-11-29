@class NSMutableDictionary;

@interface DDanmakuLayerBuffer : NSObject

@property (retain, nonatomic) NSMutableDictionary *typeToBufferMap;

- (void)addDanmakuToBuffer:(id)a0;
- (id)popExpiredDanmakusByTime:(double)a0;
- (id)tailedToLength:(unsigned long long)a0;
- (void)sort;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
