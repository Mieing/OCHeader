@class NSString;

@interface BDImageRequestKey : NSObject <NSCopying>

@property (copy, nonatomic) NSString *targetKey;
@property (copy, nonatomic) NSString *sourceKey;
@property (copy, nonatomic) NSString *sourceThumbKey;
@property (nonatomic) struct CGSize { double width; double height; } sizeLimit;
@property (nonatomic) unsigned long long memoryLimit;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (copy) NSString *transformName;
@property (nonatomic) BOOL smartCrop;
@property (nonatomic) BOOL builded;
@property (readonly, copy, nonatomic) NSString *targetkey;
@property (copy, nonatomic) NSString *transfromName;
@property (nonatomic) struct CGSize { double x0; double x1; } downsampleSize;

+ (id)cacheKeyWithURL:(id)a0;
+ (id)cacheKeyWithURL:(id)a0 transformName:(id)a1;
+ (id)cacheKeyWithURL:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)cacheKeyWithURL:(id)a0 smartCrop:(BOOL)a1;
+ (id)cacheKeyWithURL:(id)a0 sizeLimit:(struct CGSize { double x0; double x1; })a1;
+ (id)cacheKeyWithURL:(id)a0 memoryLimit:(unsigned long long)a1;
+ (id)cacheKeyWithURL:(id)a0 sizeLimit:(struct CGSize { double x0; double x1; })a1 memoryLimit:(unsigned long long)a2;
+ (id)cacheKeyWithURL:(id)a0 transformName:(id)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)cacheKeyWithURL:(id)a0 transformName:(id)a1 smartCrop:(BOOL)a2;
+ (id)cacheKeyWithURL:(id)a0 transformName:(id)a1 sizeLimit:(struct CGSize { double x0; double x1; })a2;
+ (id)cacheKeyWithURL:(id)a0 transformName:(id)a1 memoryLimit:(unsigned long long)a2;
+ (id)cacheKeyWithURL:(id)a0 transformName:(id)a1 sizeLimit:(struct CGSize { double x0; double x1; })a2 memoryLimit:(unsigned long long)a3;

- (void)regenerateTargetKey;
- (id)initWithSourceKey:(id)a0 sizeLimit:(struct CGSize { double x0; double x1; })a1 memoryLimit:(unsigned long long)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 transformName:(id)a4 smartCrop:(BOOL)a5;
- (id)initWithSourceKey:(id)a0;
- (BOOL)containsUrl:(id)a0;
- (id)extendKeyWithType:(id)a0 value:(id)a1;
- (id)initWithURL:(id)a0 downsampleSize:(struct CGSize { double x0; double x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 transfromName:(id)a3 smartCrop:(BOOL)a4;
- (void)setBuilded:(BOOL)a0;
- (BOOL)builded;
- (id)targetkey;
- (void)setTargetkey:(id)a0;
- (void)setTransfromName:(id)a0;
- (id)transfromName;
- (void)setDownsampleSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })downsampleSize;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
