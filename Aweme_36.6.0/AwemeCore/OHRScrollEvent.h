@class NSArray;

@interface OHRScrollEvent : NSObject <NSCopying>

@property (nonatomic) double majorRadius;
@property (nonatomic) double majorRadiusTolerance;
@property (retain, nonatomic) NSArray *touchEvents;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
