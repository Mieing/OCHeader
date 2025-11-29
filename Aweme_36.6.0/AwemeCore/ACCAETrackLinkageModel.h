@class NSString;
@protocol AEKVideoClipData;

@interface ACCAETrackLinkageModel : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long diffType;
@property (retain, nonatomic) id<AEKVideoClipData> oldVideoClipData;
@property (retain, nonatomic) id<AEKVideoClipData> currentVideoClipData;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } oldVideoTimeRange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } currVideoTimeRange;

- (void).cxx_destruct;

@end
