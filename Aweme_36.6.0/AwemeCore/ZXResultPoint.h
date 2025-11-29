@interface ZXResultPoint : NSObject <NSCopying>

@property (readonly, nonatomic) float x;
@property (readonly, nonatomic) float y;

+ (float)distance:(id)a0 pattern2:(id)a1;
+ (float)crossProductZ:(id)a0 pointB:(id)a1 pointC:(id)a2;
+ (id)resultPointWithX:(float)a0 y:(float)a1;
+ (void)orderBestPatterns:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithX:(float)a0 y:(float)a1;

@end
