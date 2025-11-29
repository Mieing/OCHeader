@class NSDecimalNumber;

@interface ACCStickerGeometryModel : NSObject <NSCopying>

@property (retain, nonatomic) NSDecimalNumber *x;
@property (retain, nonatomic) NSDecimalNumber *y;
@property (retain, nonatomic) NSDecimalNumber *xRatio;
@property (retain, nonatomic) NSDecimalNumber *yRatio;
@property (retain, nonatomic) NSDecimalNumber *width;
@property (retain, nonatomic) NSDecimalNumber *height;
@property (retain, nonatomic) NSDecimalNumber *rotation;
@property (retain, nonatomic) NSDecimalNumber *scale;
@property (nonatomic) BOOL preferredRatio;

+ (id)modelWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)description;
- (id)init;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
