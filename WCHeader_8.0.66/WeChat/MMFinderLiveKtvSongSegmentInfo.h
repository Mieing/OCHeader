@interface MMFinderLiveKtvSongSegmentInfo : NSObject

@property (nonatomic) BOOL hasSegment;
@property (nonatomic) long long segmentStart;
@property (nonatomic) long long segmentEnd;

+ (void)buildSongSegmentInfo:(id)a0 withSegmentInfo:(id)a1;

- (id)toSegmentPb;

@end
