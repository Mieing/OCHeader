@interface DVEVideoClipTimelineCalculator : NSObject

@property (nonatomic) double screenTimelineLength;

+ (double)clipRangeSelectRectWidth;

- (double)widthConvertFromCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })calculateClipRangeFromClipRectOffset:(double)a0 forSlot:(id)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeConvertFromWidth:(double)a0;
- (double)timelineLengthOfSlot:(id)a0;
- (id)initWithSlotDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (double)widthConvertFromSecond:(double)a0;
- (double)widthConvertFromMicrosecond:(long long)a0;
- (long long)microsecondConvertFromWidth:(double)a0;

@end
