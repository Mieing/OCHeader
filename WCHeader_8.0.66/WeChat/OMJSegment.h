@class NSString;

@interface OMJSegment : NSObject

@property (nonatomic) struct SharedPtr<XMJSegment> { struct XMJSegment *_ptr; } backingSegment;
@property (readonly, nonatomic) NSString *segmentID;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRangeInTimeline;

- (id)initWithBackingSegment:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
