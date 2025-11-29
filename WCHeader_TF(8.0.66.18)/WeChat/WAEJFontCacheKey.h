@class WAEJFontDescriptor;

@interface WAEJFontCacheKey : NSObject <NSCopying> {
    WAEJFontDescriptor *descriptor;
    float lineWidth;
    unsigned long long hash;
}

@property (readonly) int normalizedContentScale;

+ (id)keyWithDescriptor:(id)a0 lineWidth:(float)a1 contentScale:(float)a2 isWgfxMode:(BOOL)a3;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
