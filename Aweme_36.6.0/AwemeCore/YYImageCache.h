@class NSString, YYDiskCache, YYMemoryCache;

@interface YYImageCache : NSObject

@property (copy) NSString *name;
@property (readonly) YYMemoryCache *memoryCache;
@property (readonly) YYDiskCache *diskCache;
@property BOOL allowAnimatedImage;
@property BOOL decodeForDisplay;

+ (id)sharedCache;

- (void)removeImageForKey:(id)a0 withType:(unsigned long long)a1;
- (void)setImage:(id)a0 imageData:(id)a1 forKey:(id)a2 withType:(unsigned long long)a3;
- (BOOL)containsImageForKey:(id)a0;
- (void)trimToMark;
- (id)getImageForKey:(id)a0 withType:(unsigned long long)a1;
- (id)getImageForKey:(id)a0;
- (unsigned long long)imageCost:(id)a0;
- (BOOL)containsImageForKey:(id)a0 withType:(unsigned long long)a1;
- (void)getImageForKey:(id)a0 withType:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)getImageDataForKey:(id)a0;
- (void)getImageDataForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)mark;
- (id)init;
- (void)setImage:(id)a0 forKey:(id)a1;
- (void)removeImageForKey:(id)a0;
- (id)imageFromData:(id)a0;

@end
