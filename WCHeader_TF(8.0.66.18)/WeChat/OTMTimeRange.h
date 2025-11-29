@class OTMTime;

@interface OTMTimeRange : NSObject <NSCopying>

@property (readonly, nonatomic) struct XTMTimeRange { struct XTMTime { long long _periodCount; unsigned int _type; } _startValue; struct XTMTime { long long _periodCount; unsigned int _type; } _startToEndValueDifference; } backingTimeRange;
@property (retain, nonatomic) OTMTime *start;
@property (retain, nonatomic) OTMTime *duration;
@property (readonly, nonatomic) OTMTime *end;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isEmpty;

+ (id)zeroTimeRange;
+ (id)invalidTimeRange;
+ (id)timeRangeWithStartTime:(id)a0 duration:(id)a1;
+ (id)timeRangeWithBackingTimeRange:(struct XTMTimeRange { struct XTMTime { long long x0; unsigned int x1; } x0; struct XTMTime { long long x0; unsigned int x1; } x1; })a0;

- (id)initWithBackingTimeRange:(struct XTMTimeRange { struct XTMTime { long long x0; unsigned int x1; } x0; struct XTMTime { long long x0; unsigned int x1; } x1; })a0;
- (id)initWithStartTime:(id)a0 duration:(id)a1;
- (BOOL)containsTime:(id)a0;
- (id)timeForRatio:(double)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
