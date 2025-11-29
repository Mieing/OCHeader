@class NSDecimalNumber;

@interface ACCStickerTimeRangeModel : NSObject <NSCopying>

@property (retain, nonatomic) NSDecimalNumber *pts;
@property (retain, nonatomic) NSDecimalNumber *startTime;
@property (retain, nonatomic) NSDecimalNumber *endTime;

+ (id)modelWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)description;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
