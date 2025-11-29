@class NSMutableDictionary;

@interface TAVPixelBufferCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *pixelBufferCache;

- (void)dealloc;
- (id)init;
- (void)cachePixelBuffer:(struct __CVBuffer { } *)a0 withKey:(id)a1;
- (struct __CVBuffer { } *)cachedPixelBufferWithKey:(id)a0;
- (void)cleanCache;
- (void)didReceiveMemoryWarning:(id)a0;
- (void).cxx_destruct;

@end
