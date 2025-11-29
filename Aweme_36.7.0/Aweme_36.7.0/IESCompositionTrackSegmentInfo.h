@class NSString;

@interface IESCompositionTrackSegmentInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) BOOL empty;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *descr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeRangeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
