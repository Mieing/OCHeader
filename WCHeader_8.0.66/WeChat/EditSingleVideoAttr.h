@class NSString;

@interface EditSingleVideoAttr : MMObject <NSCoding>

@property (copy, nonatomic) NSString *assetURL;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } originDuration;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } editedTimeRange;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })originTimeRange;
- (void)resetEditTimeRange;
- (BOOL)isRangeEdited;
- (double)durationInSecond;
- (double)cropTimeDurationInSecond;
- (void).cxx_destruct;

@end
