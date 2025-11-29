@class NSString;

@interface AEKExtraAETrackCellModel : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })cmTimeFromString:(id)a0;
- (id)buildJsonObject;
- (id)initWithIdentifier:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void).cxx_destruct;
- (id)stringFromCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithJsonObject:(id)a0;

@end
