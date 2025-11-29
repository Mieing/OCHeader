@interface SrtColor : NSObject <NSCopying>

@property (nonatomic) double alpha;
@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;

+ (id)stickerSrtColorWithDic:(id)a0;
+ (id)stickerSrtColorWithUint32:(unsigned int)a0;

- (id)toDicSrtColor;
- (unsigned int)toUint32;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
